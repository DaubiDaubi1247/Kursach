#pragma once
#include "Debuff.h"
#include "Weapon.h"
#include "Hero.h"
#include <iostream>

using namespace std;

//Hero::Hero() {
//    this->health = NULL;
//    this->coordinate = {0,0};
//    this->weapon = nullptr;
//}

void Hero:: attack(Hero& target) {
    weapon->attack(target);
    std::cout << "Герой : " << this->getName() << " наносит : " << weapon->getDamage() << " урона, герою : " << target.getName() << endl;
    std::cout << "После удара : " << this->getName() << " у " <<  target.getName() << " осталось " << target.getHealth() << " здоровья : \n";
}

string Hero:: getName() {
    return name;
}

void Hero:: decreaseHP(int hp) {
    health -= hp;
    if (health <= 0) isDead = true;
}

void Hero:: setDebuff(Debuff* debuff) {
    this->debuff = debuff;
}


int Hero::getHealth() {
    return health;
}

bool Hero::isDied() {
    return isDead;
}

void Hero::debuffAttack() {
    if (debuff != nullptr)
        debuff->debuffAttack(*this);
}

Hero& Hero:: operator = (Hero& hero ) {
    this->weapon = weapon;
    return *this;
}

coordinate& Hero::getCoordinate() {
    return this->coor;
}

void Hero::setCoordinate(coordinate coor) {
    this->coor = coor;
}

int Hero::getId() {
    return id;
}

Weapon& Hero::getWeapon() {
    return *weapon;
}

int Hero::getDirection() {
    return direction;
}

void Hero::setDir(int dir) {
    this->direction = dir;
}

