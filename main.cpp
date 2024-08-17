#include <stdio.h> 
#include <vector>
#include "include/raylib.h"
#include "include/raymath.h"
#include "Character.h"
#include "Prop.h"
#include "Enemy.h"

using namespace std;

bool isRectangleCollision(Rectangle r1, Rectangle r2) {
    return (r1.x < r2.x + r2.width && 
            r1.x + r1.width > r2.x &&
            r1.y < r2.y + r2.height &&
            r1.y + r1.height > r2.y);
}


int main()
{   
    const float width = 385;
    const float height = 385;

    SetTargetFPS(60);
    InitWindow(width, height, "Classy Clash");

    Texture2D gameMap = LoadTexture("textures/nature_tileset/background.png");

    Character hero(width, height);

    Enemy goblin1(Vector2{500, 500},
              LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
              LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin2(Vector2{1000, 800},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin3(Vector2{5000, 998},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin4(Vector2{2200, 200},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin5(Vector2{3000, 400},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin6(Vector2{6000, 600},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin7(Vector2{5550, 800},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin8(Vector2{3500, 1000},
                LoadTexture("textures/characters/goblin_idle_spritesheet.png"),
                LoadTexture("textures/characters/goblin_run_spritesheet.png"));

    Enemy goblin9(Vector2{2600, 2600},
                LoadTexture("textures/characters/slime_idle_spritesheet.png"),
                LoadTexture("textures/characters/slime_run_spritesheet.png"));

    Enemy goblin10(Vector2{7000, 1400},
                LoadTexture("textures/characters/slime_idle_spritesheet.png"),
                LoadTexture("textures/characters/slime_run_spritesheet.png"));


    Enemy goblins[10] = {
        goblin1, goblin2, goblin3, goblin4, goblin5,
        goblin6, goblin7, goblin8, goblin9, goblin10
    };

    for(auto &goblin : goblins){
        goblin.setTarget(&hero);
    }

    Prop rocks[5] = {
        {LoadTexture("textures/nature_tileset/rock.png"), {500, 600}},
        {LoadTexture("textures/nature_tileset/log.png"), {700, 200}},
        {LoadTexture("textures/nature_tileset/rock.png"), {1200, 500}},
        {LoadTexture("textures/nature_tileset/rock.png"), {100, 1200}},
        {LoadTexture("textures/nature_tileset/log.png"), {1000, 600}},
    };

    float rightLeft = 1.0f; // 1.0f : face the right side, -1.0f : face the left side

    while (!WindowShouldClose()) 
    {
        bool isHeroRunning = false;
        bool isCollision = false;

        BeginDrawing();

        
        ClearBackground(WHITE);

        float dT = GetFrameTime();
        char scoreText[50];
        char healthText[50];

        sprintf(scoreText, "Score: %d", hero.getScore()); 
        sprintf(healthText, "Health: %.1f", hero.getHealth());

        hero.tick(dT, gameMap, width, height);
        if(hero.getAlive()){
            DrawText(healthText, 160 -30, 55.f, 30, RED);
        }
        else{
            DrawTextureEx(gameMap, {-hero.getWorldPos().x, -hero.getWorldPos().y}, 0.0f, 4.0, WHITE);
            DrawText("Game Over!", 160 - 20, 160, 30, RED);
            EndDrawing();
            continue;
        }

        for(auto &goblin : goblins){
            goblin.tick(dT);
        }

        for(auto &rock : rocks){
            rock.RenderPos(hero.getWorldPos());
        }

        for(auto rock : rocks){
            isCollision = isRectangleCollision(hero.getCollisonRec(), rock.getPropRectangle(hero.getWorldPos()));
            if(isCollision){
                DrawText("Collision!", 0, height - 50, 50, BLACK);
                hero.undoMovement();
            }
        }
        
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            for(auto &goblin : goblins){
                if(isRectangleCollision(hero.getWeaponCollisionRec(), goblin.getCollisonRec())){
                    goblin.setAlive(false);
                    hero.setScore();
                }
            }
        }

        EndDrawing();
    }

    // Unload textures
    UnloadTexture(gameMap);
    CloseWindow();

    return 0;
}
