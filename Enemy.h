#ifndef _ENEMY_H_
#define _ENEMY_H_

#include "include/raylib.h"
#include "BaseCharacter.h"
#include "Character.h"
#include "include/raymath.h"


class Enemy : public BaseCharacter{
private:
    Character *target;
    float damagePerSec{10.0f};
    float radius{40.0f};
public:
    Enemy(Vector2 Pos, Texture2D idle_texture, Texture2D run_texture);
    void damage(const float dT);
    void tick(const float deltaTime);
    void setTarget(Character *hero);
    ~Enemy();
};

#endif