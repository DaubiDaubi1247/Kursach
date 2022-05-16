#include "HeroFabric.h"

class HordeHeroFabric : public HeroFabric {
    public : 
        Hero* createWarrior();
        Hero* createArcher();
};

class KittyHeroFabric : public HeroFabric {
    public : 
        Hero* createWarrior();
        Hero* createArcher();
};