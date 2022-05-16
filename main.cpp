#include <iostream>
#include "HeroFabrics.h"
#include "KittyHero.h"
#include <locale>

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ��� ������������ ������ ��  �++  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! C++ ����� ������ ������ �� ����� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ������� ������ ����� ����������� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main() {
    setlocale(0,"rus");
    auto fabric = KittyHeroFabric();
    Hero& vlu = *fabric.createWarrior();
    Hero& cmonya = *fabric.createArcher();

    cout << "�� �� ����� " << cmonya.getHealth() << endl;

    vlu.attack(cmonya);

    cout <<"�� ����� ����� " << cmonya.getHealth() << endl;

    cmonya.debuffAttack();
    
    cout << "�� ����� ������� " << cmonya.getHealth();


    return 0;
}