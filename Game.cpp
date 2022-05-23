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
    
    cout << "�������� ����� : 0 - ����, 1 - ������ (����� ��� �� ������� ��������, ���� ��� ����� ������� ����� �� ��� ����)\n";
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

    cout << "������ ����� \n";
    initPlayer(*firstPlayer);
    cout << "������ ����� \n";
    initPlayer(*secondPlayer);
}

void Game::gameProcess() {
    GameMap::getInstance().printMap();
    while (!firstPlayer->isLost() && !secondPlayer->isLost()) {
        cout << "��� ������ ����� 1\n";
        firstPlayer->makeTurn(*secondPlayer);
        cout << "��� ������ ����� 2\n";

        secondPlayer->makeTurn(*firstPlayer);
    }
}

void Game::endOfGame() {
    cout << "������� ����� : ";
    
    if (!firstPlayer->isLost()) {
        cout << "1";
    } else {
        cout << "2";
    }
}