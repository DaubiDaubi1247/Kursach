#include <iostream>
#include "HeroFabrics.h"
#include "KittyHero.h"
#include <locale>
#include "Game.h"

int main() {
    setlocale(0,"rus");
    Game game = Game();
    game.startOfGame();
    game.gameProcess();


    return 0;
}
