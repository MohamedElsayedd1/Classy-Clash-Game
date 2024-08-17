#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "include/raylib.h"
#include "BaseCharacter.h"

class Character : public BaseCharacter
{
private:
    Texture2D weapon = LoadTexture("textures/characters/weapon_sword.png");
    Rectangle weaponCollisionRec;
    float health{100.0f};
    int score{0};
public:
    Character(const float WindowWidth, const float WindowHeight);
    void setScreenPos(float windowWidth, float windowHeight);
    void tick(const float dT, const Texture2D gameMap, const float windowWidth, const float windowHeight);
    Rectangle getWeaponCollisionRec(void);
    float getHealth(void) const { return health;}
    void takeDamage(float damage);
    void setScore(void){ score++; }
    int getScore(void){ return score;}
    ~Character();
};

#endif