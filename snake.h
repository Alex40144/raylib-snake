#pragma once
#include <vector>
#include "vec2.h"
#include "raylib.h"
#include "raylibWrapper.h"
class Snake
{
public:
    Snake();
    void update();
    Vec2<int> getHeadPosition();
    void setHeadPosition(Vec2<int> pos);
    std::vector<Vec2<int>> position;
    void extend();

};

