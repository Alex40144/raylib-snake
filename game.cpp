#include "game.h"
#include <raylib.h>
#include <assert.h>
#include "settings.h"

Game::Game(int width, int height, int fps, std::string title) : 
    board(settings::boardPosition, settings::boardWidthHeight, settings::cellSize, settings::padding),
    snake(),
    treasure()
{
    assert(!GetWindowHandle()); //window already open
    SetTargetFPS(fps);
    InitWindow(width, height, title.c_str());

}

Game::~Game() noexcept
{
    assert(GetWindowHandle()); //window is already closed
    CloseWindow();
}

bool Game::GameShouldClose() const
{
    return WindowShouldClose();
}

void Game::Tick()
{
    BeginDrawing();
    Update();
    Draw();
    DrawFPS(10, 10);
    EndDrawing();
}

void Game::Update()
{
    snake.update();

    if (treasure.getPosition() == snake.getHeadPosition()) //if player has reached treasure.
    {
        snake.extend();
        treasure.randomPosition();
    }

}

void Game::Draw()
{
    ClearBackground(BLACK);
    board.Clear();

    board.SetCell(treasure.getPosition(), GREEN); //draw treasure

    for (int i = 0; i < snake.position.size(); i++)
    {
        board.SetCell(snake.position[i], WHITE);
    }

    board.Draw();
}