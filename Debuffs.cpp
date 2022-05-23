#include "Debuffs.h"
#include "Hero.h"

Bleeding::Bleeding() : Debuff(DAMAGE,TIMES,"������������") {};

void Bleeding::debuffAttack(Hero& target) {
    target.decreaseHP(this->damage);
    this->times--;
    cout << this->name << " ������� " << this->damage << " ����� ����� : " << target.getName() << endl;
    
}

Poison::Poison() : Debuff(DAMAGE,TIMES,"��"){};

void Poison::debuffAttack(Hero& target){
    target.decreaseHP(this->damage);
    this->times--;
    cout << this->name << " ������� " << this->damage << " ����� ����� : " << target.getName() << endl;
}

Curse::Curse() : Debuff(DAMAGE, TIMES, "���������") {};

void Curse::debuffAttack(Hero& target) {
    target.decreaseHP(this->damage);
    this->times--;
    cout << this->name << " ������� " << this->damage << " ����� ����� : " << target.getName() << endl;
}