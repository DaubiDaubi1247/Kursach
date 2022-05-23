#include "Debuffs.h"
#include "Hero.h"

Bleeding::Bleeding() : Debuff(DAMAGE,TIMES,"кровотечение") {};

void Bleeding::debuffAttack(Hero& target) {
    target.decreaseHP(this->damage);
    this->times--;
    cout << this->name << " наносит " << this->damage << " урона герою : " << target.getName() << endl;
    
}

Poison::Poison() : Debuff(DAMAGE,TIMES,"яд"){};

void Poison::debuffAttack(Hero& target){
    target.decreaseHP(this->damage);
    this->times--;
    cout << this->name << " наносит " << this->damage << " урона герою : " << target.getName() << endl;
}

Curse::Curse() : Debuff(DAMAGE, TIMES, "проклятие") {};

void Curse::debuffAttack(Hero& target) {
    target.decreaseHP(this->damage);
    this->times--;
    cout << this->name << " наносит " << this->damage << " урона герою : " << target.getName() << endl;
}