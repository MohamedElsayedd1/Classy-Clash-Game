#include "BaseCharacter.h"

BaseCharacter::BaseCharacter(){
    width = idle.width / 6;
    height = idle.height;
    rightLeft = 1.0f;
    runningTime = 0.0f;
}

void BaseCharacter::setCharacterSourceRectangle()
{
    characterSrc.x = 0;
    characterSrc.y = 0;
    characterSrc.width = idle.width / 6.0f;
    characterSrc.height = idle.height;
}

void BaseCharacter::setCharacterDestRectangle()
{
    characterDes.x = screenPos.x;
    characterDes.y = screenPos.y;
    characterDes.width = scale * characterSrc.width;
    characterDes.height = scale * characterSrc.height;
}

Texture2D BaseCharacter::FlipTextureHorizontally(Texture2D texture){
    Image img = LoadImageFromTexture(texture);
    ImageFlipHorizontal(&img);
    Texture2D flippedTexture = LoadTextureFromImage(img);
    UnloadImage(img);
    return flippedTexture;
}

Vector2 BaseCharacter::getWorldPos(){
    return worldPos;
}

Vector2 BaseCharacter::getScreenPos() const{
    return screenPos;
}

void BaseCharacter::undoMovement(){
    worldPos = worldPosLastFrame;
}

Rectangle BaseCharacter::getCollisonRec(){
    return Rectangle{
        screenPos.x,
        screenPos.y,
        characterDes.width,
        characterDes.height
    };
}
