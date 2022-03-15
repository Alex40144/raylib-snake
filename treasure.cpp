#include "treasure.h"

Treasure::Treasure()
{
    position = { 0,0 };
}

Vec2<int> Treasure::getPosition()
{
    return position;
}

void Treasure::setPosition(Vec2<int> pos)
{
    position = pos;
}

void Treasure::randomPosition()
{
    int x = rand() % settings::boardWidthHeight.GetX();
    int y = rand() % settings::boardWidthHeight.GetY();

    setPosition(Vec2<int>{x, y});

}