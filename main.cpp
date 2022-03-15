#include "game.h"
#include <raylib.h>
#include "settings.h"

int main(void){
    // Initialization
    //--------------------------------------------------------------------------------------

    Game game{settings::screenWidth, settings::screenHeight, settings::fps, "raylib snake"};

    while(!game.GameShouldClose()){
        game.Tick();
    }

    return 0;
}
