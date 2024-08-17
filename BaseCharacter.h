
#ifndef _BASE_CHARACTER_H_
#define _BASE_CHARACTER_H_

#include "include/raylib.h"

class BaseCharacter{
private : 
    bool alive{true};
protected:
    Texture2D idle;
    Texture2D run;
    Texture2D runFlipped;
    Vector2 screenPos;
    Vector2 worldPos;
    Vector2 worldPosLastFrame;
    Rectangle characterSrc;
    Rectangle characterDes;
    float rightLeft; // 1.0f : face the right side, -1.0f : face the left side
    float runningTime;
    const float updateTime{1.0f / 12.0f};
    const float scale{4.0f};
    float directionSpeed;
    float width;
    float height;
public:
    BaseCharacter();
    Texture2D FlipTextureHorizontally(Texture2D texture);
    void setCharacterSourceRectangle();
    void setCharacterDestRectangle();
    Vector2 getWorldPos();
    void undoMovement();
    Rectangle getCollisonRec();
    Vector2 getScreenPos() const;
    bool getAlive(){return alive;}
    void setAlive(bool isAlive){ alive = isAlive; }
};

#endif