#include "snake.h"

#include <iostream>

Snake::Snake()
{
	position.resize(1);
	position[0] = { 0,0 };

}

void Snake::update()
{
	if (IsKeyPressed(KEY_W))
	{
		setHeadPosition(Vec2<int>{getHeadPosition().GetX(), getHeadPosition().GetY() - 1});
	}
	else if (IsKeyPressed(KEY_S))
	{
		setHeadPosition(Vec2<int>{getHeadPosition().GetX(), getHeadPosition().GetY() + 1});
	}
	else if (IsKeyPressed(KEY_A))
	{
		setHeadPosition(Vec2<int>{getHeadPosition().GetX() - 1, getHeadPosition().GetY()});
	}
	else if (IsKeyPressed(KEY_D))
	{
		setHeadPosition(Vec2<int>{getHeadPosition().GetX() + 1, getHeadPosition().GetY()});
	}
}

Vec2<int> Snake::getHeadPosition()
{
	return position[0];
}

void Snake::setHeadPosition(Vec2<int> pos)
{
	for (int i = position.size() - 1; i > 0; i--)
	{
		position[i] = position[i - 1];
	}
	position[0] = pos;
}

void Snake::extend()
{
	position.resize(position.size() + 1);

	position[position.size() - 1] = position[position.size() - 2];
}
