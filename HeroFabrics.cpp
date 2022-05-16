#include "HeroFabrics.h"
#include "Hero.h"
#include "HordeHero.h"
#include "KittyHero.h"

Hero* HordeHeroFabric::createArcher() {
    return new HordeWarrior();
}

Hero* HordeHeroFabric::createWarrior() {
    return new HordeArcher();
}

Hero* KittyHeroFabric::createArcher() {
    return new KittyArcher();
}

Hero* KittyHeroFabric::createWarrior() {
    return new KittyWarrior();
}