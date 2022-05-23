#pragma once
class Hero;
#include "Debuff.h"
#include <iostream>


class Bleeding : public Debuff {
    enum BleedingCharasteristic {
        TIMES = 2,
        DAMAGE = 10
    };

    public:
        Bleeding();

        void debuffAttack(Hero& target) override;
};


class Poison : public Debuff {
    enum BleedingCharasteristic {
        TIMES = 4,
        DAMAGE = 5
    };
    public:
        Poison();

        void debuffAttack(Hero& target) override;
};

class Curse : public Debuff {
    enum BleedingCharasteristic {
        TIMES = 3,
        DAMAGE = 7
    };
public:
    Curse();

    void debuffAttack(Hero& target) override;
};