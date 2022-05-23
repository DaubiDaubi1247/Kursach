#include "HeroFabrics.h"
#include "Hero.h"
#include "HordeHero.h"
#include "KittyHero.h"

Hero* HordeHeroFabric::createArcher() {
    return new HordeArcher();
}

Hero* HordeHeroFabric::createWarrior() {
    return new HordeWarrior();
}

Hero* HordeHeroFabric::createKiller() {
    return new HordeKiller();
}

Hero* KittyHeroFabric::createArcher() {
    return new KittyArcher();
}

Hero* KittyHeroFabric::createWarrior() {
    return new KittyWarrior();
}

Hero* KittyHeroFabric::createKiller() {
    return new KittyKiller();
}