#include "HordeHero.h"
#include "Debuffs.h"
#include "Weapons.h"

HordeWarrior::HordeWarrior() {
    this->name = "������ ������ ����";
    this->health = 50;
    
    auto debuff = Bleeding();
    auto weapon = new Axe(debuff);
    
    this->weapon = weapon;
}

void HordeWarrior::move(){
    
}

HordeArcher::HordeArcher() {
    this->name = "������";
    this->health = 25;

    auto debuff = Poison();
    auto weapon = new Axe(debuff);

    this->weapon = weapon;
}

void HordeArcher::move() {

}