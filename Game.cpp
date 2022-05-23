#include "GameMap.h"
#include "Game.h"
#include "Player.h"
#include "HeroFabrics.h"
#include "Coordinate.h"
#include "Army.h"
#include <iostream>

using namespace std;

Game::Game() {
    /*auto army = Army();
    firstPlayer = new Player(army);
    auto army2 = Army();
    secondPlayer = new Player(army2);*/

    firstPlayer = new Player();
    secondPlayer = new Player();
}

void Game::startOfGame() {
    initPlayers();
    GameMap::getInstance();
    
    for (auto& hero : firstPlayer->getArmy()) {
        GameMap::getInstance().setHeroInMap(*hero);
    }

    for (auto& hero : secondPlayer->getArmy()) {
        GameMap::getInstance().setHeroInMap(*hero);
    }
}


void Game::initPlayer(Player& player) {
    
    cout << "Выберите рассу : 0 - Орда, 1 - Котята (пусть вас не смущает название, один Влу может навести страх на всю орду)\n";
    int userChoice;
    cin >> userChoice;
    
    HeroFabric* heroFabric = nullptr;
    switch (userChoice) {
        case 0 : 
            heroFabric = new HordeHeroFabric();
            break;
        case 1 : 
            heroFabric = new KittyHeroFabric();
            break;
        default:
            break;
    }
    
    player.createArmy(*heroFabric);
    
};

void Game::initPlayers() {

    cout << "Первый игрок \n";
    initPlayer(*firstPlayer);
    cout << "Второй игрок \n";
    initPlayer(*secondPlayer);
}

void Game::gameProcess() {
    GameMap::getInstance().printMap();
    while (!firstPlayer->isLost() && !secondPlayer->isLost()) {
        cout << "Ход игрока номер 1\n";
        firstPlayer->makeTurn(*secondPlayer);
        cout << "Ход игрока номер 2\n";

        secondPlayer->makeTurn(*firstPlayer);
    }
}

void Game::endOfGame() {
    cout << "Победил игрок : ";
    
    if (!firstPlayer->isLost()) {
        cout << "1";
    } else {
        cout << "2";
    }
}