#pragma once
#include "Debuff.h"
#include "Weapon.h"
#include "Hero.h"

using namespace std;

//Hero::Hero() {
//    this->health = NULL;
//    this->coordinate = {0,0};
//    this->weapon = nullptr;
//}

void Hero:: attack(Hero& target) {
    weapon->attack(target);
}

string Hero:: getName() {
    return name;
}

void Hero:: decreaseHP(int hp) {
    health -= hp;
    if (health <= 0) isDie = true;
}

void Hero:: setDebuff(Debuff* debuff) {
    this->debuff = debuff;
}


int Hero::getHealth() {
    return health;
}

bool Hero::isDead() {
    return isDie;
}

void Hero::debuffAttack() {
    if (debuff != nullptr)
        debuff->debuffAttack(*this);
}

Hero& Hero:: operator = (Hero& hero ) {
    this->weapon = weapon;
    return *this;
}




