#include <string>

class Hero;

class HeroFabric {
    public : 
        virtual Hero* createWarrior() = 0;
        virtual Hero* createArcher() = 0;
        virtual Hero* createKiller() = 0;
};