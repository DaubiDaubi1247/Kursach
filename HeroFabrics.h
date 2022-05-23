#include "HeroFabric.h"

class HordeHeroFabric : public HeroFabric {
    public : 
        Hero* createWarrior();
        Hero* createArcher();
        Hero* createKiller();
};

class KittyHeroFabric : public HeroFabric {
public:
    Hero* createWarrior();
    Hero* createArcher();
    Hero* createKiller();
};