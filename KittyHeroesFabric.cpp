#include "KittyHero.h"
#include "Debuffs.h"
#include "Weapons.h"

KittyWarrior::KittyWarrior() {
    this->name = "Влу";
    this->health = 50;
    this->rangeMoving = 1;

    this->id = 1;
    static auto debuff = Poison();
    auto weapon = new Axe(debuff);

    this->weapon = weapon;
}



KittyArcher::KittyArcher() {
    this->name = "Чмоня";
    this->health = 25;
    this->rangeMoving = 2;
    this->id = 2;
    static auto debuff = Bleeding();
    auto weapon = new Bow(debuff);

    this->weapon = weapon;
}



KittyKiller::KittyKiller() {
    this->name = "Котолак";
    this->health = 15;
    this->rangeMoving = 4;
    this->id = 3;
    static auto debuff = Curse();
    auto weapon = new Blade(debuff);

    this->weapon = weapon;
}