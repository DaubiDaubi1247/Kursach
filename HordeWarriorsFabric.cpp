#include "HordeHero.h"
#include "Debuffs.h"
#include "Weapons.h"

HordeWarrior::HordeWarrior() {
    this->name = "Гаррош Адский Крик";
    this->health = 50;
    
    auto debuff = Bleeding();
    auto weapon = new Axe(debuff);
    
    this->weapon = weapon;
}

void HordeWarrior::move(){
    
}

HordeArcher::HordeArcher() {
    this->name = "Рексар";
    this->health = 25;

    auto debuff = Poison();
    auto weapon = new Axe(debuff);

    this->weapon = weapon;
}

void HordeArcher::move() {

}