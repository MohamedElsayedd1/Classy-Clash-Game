#ifndef _PROP_H_
#define _PROP_H_

#include "include/raylib.h"

class Prop{
private : 
    Texture2D texture;
    Vector2 worldPos{};
    float scale;
public : 
    Prop(Texture2D tex, Vector2 WrldPos) : texture(tex), worldPos(WrldPos), scale(4.0){}
    void RenderPos(Vector2 knightPos);
    Rectangle getPropRectangle(Vector2 knightPos);
};

#endif