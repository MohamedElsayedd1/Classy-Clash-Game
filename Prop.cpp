#include "Prop.h"

void Prop::RenderPos(Vector2 knightPos)
{
    Vector2 screenPos;
    screenPos.x = worldPos.x - knightPos.x;
    screenPos.y = worldPos.y - knightPos.y; 
    DrawTextureEx(texture, screenPos, 0.0f, 4.0f, WHITE);
}

Rectangle Prop::getPropRectangle(Vector2 knightPos) {
    Vector2 screenPos;
    screenPos.x = worldPos.x - knightPos.x;
    screenPos.y = worldPos.y - knightPos.y; 
    Rectangle prop = {
        screenPos.x, 
        screenPos.y,
        texture.width * scale - 10,
        texture.height * scale - 10
    };
    return prop;
}