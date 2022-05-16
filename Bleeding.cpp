#include "Debuff.h"
#include "Hero.h"

enum BleedingCharasteristic {
    TIMES = 2,
    DAMAGE = 10
};

class Bleeding : public Debuff {
public:
    Bleeding() : Debuff(BleedingCharasteristic::TIMES, BleedingCharasteristic::DAMAGE) {};

    void debuffAttack(Hero* target) {
        cout << target->getName() << " ������� " << damage << " �� �������� ������������";
        target->decreaseHP(damage);
        times--;
    }
};