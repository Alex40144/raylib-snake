#pragma once
#include "vec2.h"
#include <stdlib.h>
#include <time.h>
#include "settings.h"
class Treasure
{
public:
	Treasure();
	Vec2<int> getPosition();
	void setPosition(Vec2<int> pos);
	void randomPosition();
private:
	Vec2<int> position;
};