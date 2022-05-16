#include "Debuff.h"
#include "Hero.h"
const int TIMES = 4;
const int DAMAGE = 5;

class Poison : Debuff {
    public : 
        Poison() : Debuff(TIMES,DAMAGE){};

        void debuffAttack(Hero* target) {
            cout << target->getName() << " Получил " << damage << " от действия яда";
            target->decreaseHP(damage);
            times--;
        }
}; 