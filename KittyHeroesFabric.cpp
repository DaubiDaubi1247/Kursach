#include "KittyHero.h"
#include "Debuffs.h"
#include "Weapons.h"

KittyWarrior::KittyWarrior() {
    this->name = "¬лу";
    this->health = 50;

    static auto debuff = Poison();
    auto weapon = new Axe(debuff);

    this->weapon = weapon;
}

void KittyWarrior::move() {

}

KittyArcher::KittyArcher() {
    this->name = "„мон€";
    this->health = 25;

    auto debuff = Bleeding();
    auto weapon = new Bow(debuff);

    this->weapon = weapon;
}

void KittyArcher::move() {

}