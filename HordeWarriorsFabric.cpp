#include "HordeHero.h"
#include "Debuffs.h"
#include "Weapons.h"

HordeWarrior::HordeWarrior() {
    this->name = "Гаррош Адский Крик";
    this->health = 50;
    this->rangeMoving = 1;
    this->id = 1;
    static auto debuff = Bleeding();
    auto weapon = new Axe(debuff);
    
    this->weapon = weapon;
}


HordeArcher::HordeArcher() {
    this->name = "Рексар";
    this->health = 25;
    this->rangeMoving = 2;
    this->id = 2;
    static auto debuff = Poison();
    auto weapon = new Bow(debuff);

    this->weapon = weapon;
}

HordeKiller::HordeKiller() {
    this->name = "Валира Сангвинар";
    this->health = 15;
    this->rangeMoving = 4;
    this->id = 3;
    static auto debuff = Poison();
    auto weapon = new Blade(debuff);

    this->weapon = weapon;
}
