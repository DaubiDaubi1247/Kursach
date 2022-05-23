#pragma once
#include <vector>

class Hero;
class HeroFabric;

class Army {
    private : 
        std::vector<Hero*> army;

    public : 
        void createArmy(HeroFabric& heroFabric);
        Hero* getHeroByID(int ID);
        bool isEmpty();

        std::vector<Hero*> getArmy();


};