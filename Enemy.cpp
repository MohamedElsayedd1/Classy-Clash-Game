#include "Enemy.h"

Enemy::Enemy(Vector2 Pos, Texture2D idle_texture, Texture2D run_texture) :  BaseCharacter(){
    worldPos = Pos;
    screenPos = Pos;
    idle = idle_texture;
    run = run_texture;
    directionSpeed = 200;
    runFlipped = FlipTextureHorizontally(run);
    setCharacterSourceRectangle();
    setCharacterDestRectangle();
}

void Enemy::damage(const float dT){
    target->takeDamage(damagePerSec * dT);
}

void Enemy::tick(const float dT)
{
    if(!getAlive()) 
        return;
        
    bool isEnemyRunning = false;
    worldPosLastFrame = worldPos;

    Vector2 toTarget = Vector2Subtract(target->getScreenPos(), screenPos);

    // Check the distance to the target
    float distanceToTarget = Vector2Length(toTarget);

    if (distanceToTarget >= radius)
    {
        // Normalize and scale the vector to move towards the player
        toTarget = Vector2Normalize(toTarget);
        toTarget = Vector2Scale(toTarget, directionSpeed * dT);

        // Update enemy's position
        worldPos = Vector2Add(worldPos, toTarget);
        rightLeft = (worldPos.x > worldPosLastFrame.x) ? 1.0f : -1.0f;

        // Mark the enemy as running
        isEnemyRunning = true;
    }

    screenPos = Vector2Subtract(worldPos, target->getWorldPos());
    characterDes.x = screenPos.x;
    characterDes.y = screenPos.y;

    runningTime += dT;

    if (runningTime >= updateTime)
    {
        runningTime = 0.0f;
        characterSrc.x += idle.width / 6.0f;
        if (characterSrc.x >= idle.width)
        {
            characterSrc.x = 0;
        }
    }

    if (isEnemyRunning)
    {
        if (rightLeft < 0)
            DrawTexturePro(runFlipped, characterSrc, characterDes, Vector2{0, 0}, 0.0f, WHITE);
        else
            DrawTexturePro(run, characterSrc, characterDes, Vector2{0, 0}, 0.0f, WHITE);
    }
    else
    {
        DrawTexturePro(idle, characterSrc, characterDes, Vector2{0, 0}, 0.0f, WHITE);
    }

    if(CheckCollisionRecs(this->getCollisonRec(), target->getCollisonRec())){
        damage(dT);
    }
}

void Enemy::setTarget(Character *hero){
    target = hero;
}

Enemy::~Enemy(){
    UnloadTexture(idle);
    UnloadTexture(run);
    UnloadTexture(runFlipped);
}