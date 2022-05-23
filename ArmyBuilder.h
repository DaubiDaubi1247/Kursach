#pragma once
#include <vector>
class Hero;

class ArmyBuilder {
    protected : 
        std::vector<Hero*> army;

    public : 
        void createArmy();
        void createWarrior();
        void createArcher();
        std::vector<Hero*> getArmy();
};
