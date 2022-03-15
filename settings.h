#ifndef settings_h
#define settings_h
#include "Vec2.h"
namespace settings
{
    //Window settings
    inline constexpr int screenWidth = 1400;
    inline constexpr int screenHeight = 500;
    inline constexpr int fps = 60;

    //Board settings
    inline constexpr int cellSize = 45;
    inline constexpr int padding = 5;
    inline constexpr Vec2<int> boardPosition{ 250, 100 };
    inline constexpr Vec2<int> boardWidthHeight{ 20,6 };
}



#endif