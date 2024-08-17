#include "Character.h"
#include <stdio.h> 

Character::Character(const float windowWidth, const float windowHeight) : BaseCharacter()
{
    idle = LoadTexture("textures/characters/knight_idle_spritesheet.png");
    run = LoadTexture("textures/characters/knight_run_spritesheet.png");
    runFlipped = FlipTextureHorizontally(run);
    worldPos = {0, 0};
    directionSpeed = 500;
    setScreenPos(windowWidth, windowHeight);
    setCharacterSourceRectangle();
    setCharacterDestRectangle();
}

void Character::setScreenPos(const float windowWidth, const float windowHeight)
{
    screenPos.x = windowWidth / 2.0f - scale * (0.5f * idle.width / 6.0f);
    screenPos.y = windowHeight / 2.0f - scale * (0.5f * idle.height);
}

void Character::tick(const float dT, const Texture2D gameMap, const float windowWidth, const float windowHeight)
{
    if(!getAlive()) 
        return;

    bool isHeroRunning = false;
    worldPosLastFrame = worldPos;
    if (IsKeyDown(KEY_A) && worldPos.x > -5)
    {
        worldPos.x -= directionSpeed * dT;
        isHeroRunning = true;
    }
    if (IsKeyDown(KEY_D) && worldPos.x < gameMap.width * scale - windowWidth)
    {
        worldPos.x += directionSpeed * dT;
        isHeroRunning = true;
    }
    if (IsKeyDown(KEY_W) && worldPos.y > -5)
    {
        worldPos.y -= directionSpeed * dT;
        isHeroRunning = true;
    }
    if (IsKeyDown(KEY_S) && worldPos.y < gameMap.height * scale - windowHeight)
    {
        worldPos.y += directionSpeed * dT;
        isHeroRunning = true;
    }

    Vector2 mapPos = {-worldPos.x, -worldPos.y};
    DrawTextureEx(gameMap, mapPos, 0.0f, scale, WHITE);

    rightLeft = (IsKeyDown(KEY_A)) ? -1.0f : 1.0f;

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

    if (isHeroRunning)
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

    Vector2 weaponOffset{};
    float weaponRotation{};
    Vector2 weaponOrigin{};

    if(rightLeft > 0.0f){
        weaponOrigin = {0.0f, weapon.height * scale};
        weaponOffset = {35.0f, 55.0f};
        weaponCollisionRec = {
            screenPos.x + weaponOffset.x,
            screenPos.y + weaponOffset.y - weapon.height * scale,
            weapon.width * scale,
            weapon.height * scale
        };
        weaponRotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? 42.f : 0.0f;
    }
    else{
        weaponOrigin = {weapon.width * scale, weapon.height * scale};
        weaponOffset = {35.0f, 55.0f};
        weaponCollisionRec = {
            screenPos.x + weaponOffset.x - weapon.width * scale,
            screenPos.y + weaponOffset.y - weapon.height * scale,
            weapon.width * scale,
            weapon.height * scale
        };
        weaponRotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? -42.f : 0.0f;
    }

    Rectangle weaponSrc = {0.f, 0.f, weapon.width * rightLeft, weapon.height};
    Rectangle weaponDes = {screenPos.x + weaponOffset.x, screenPos.y + weaponOffset.y, weapon.width * scale, weapon.height * scale};

    DrawTexturePro(weapon, weaponSrc, weaponDes, weaponOrigin, weaponRotation, WHITE);


}

Rectangle Character::getWeaponCollisionRec(void){
    return weaponCollisionRec;
}

void Character::takeDamage(float damage){
    this->health -= damage;
    if(this->health <= 0){
        setAlive(false);
    }
}

Character::~Character()
{
    UnloadTexture(idle);
    UnloadTexture(run);
    UnloadTexture(runFlipped);
}
