#pragma once
#include <vector>

class Army;
class Hero;
class HeroFabric;

class Player {
    private : 
        bool isLose = false;
        void startOfTurn();
        std::vector<Hero*> army;
    
    public : 
        //Player(Army& army) : army(army){};
        void makeTurn(Player& rival);
        bool isLost();
        void createArmy(HeroFabric& heroFabric);
        Hero* getHeroByID(int ID);
        //bool isEmpty();

        std::vector<Hero*> getArmy();
};