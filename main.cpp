#include <iostream>
#include "HeroFabrics.h"
#include "KittyHero.h"
#include <locale>

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ÏÓÂ ¿¬“Œ–»“≈“ÕŒ≈ ÃÕ≈Õ»≈ Œ¡  —++  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! C++ ’”…Õﬂ œ–Œ—“Œ ≈¡¿Õ¿ﬂ ‘” ¡Àﬂ“‹ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! √¿¬Õ»Ÿ≈ ≈¡¿ÕŒ≈ ’”≈“¿ ¡Àﬂƒ— ¿ﬂﬂﬂﬂ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main() {
    setlocale(0,"rus");
    auto fabric = KittyHeroFabric();
    Hero& vlu = *fabric.createWarrior();
    Hero& cmonya = *fabric.createArcher();

    cout << "ıÔ ‰Ó ‡Ú‡ÍË " << cmonya.getHealth() << endl;

    vlu.attack(cmonya);

    cout <<"ıÔ ÔÓÒÎÂ ‡Ú‡ÍË " << cmonya.getHealth() << endl;

    cmonya.debuffAttack();
    
    cout << "ıÔ ÔÓÒÎÂ ‰Â·‡ÙÙ‡ " << cmonya.getHealth();


    return 0;
}