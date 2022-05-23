#include "Weapon.h"
#include "Hero.h"
#include "Debuff.h"
#include <iostream>

Weapon::Weapon(Debuff& debuff, int damage, int range) :debuff(debuff) {
    this->damage = damage;
    this->range = range;

}

int Weapon :: getDamage() {
    return damage;
}

Debuff& Weapon :: getDebuff() {
    return debuff;
}

int Weapon :: getRange() {
    return range;
}

void Weapon :: attack(Hero& target) {
    
    target.decreaseHP(damage);
    target.setDebuff(&debuff);
}

//Weapon& Weapon :: operator = (Weapon& weapon) {
//    this->damage = weapon.damage;
//    this->debuff = weapon.debuff;
//    this->range = weapon.range;
//    return *this;
//}

Weapon* Weapon :: operator = (Weapon* weapon) {
    this->damage = weapon->damage;
    this->debuff = weapon->debuff;
    this->range = weapon->range;
    return this;
}
