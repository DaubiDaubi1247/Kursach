#pragma once
#include "Hero.h"

class HordeWarrior : public Hero {
    public:
        HordeWarrior();

        void move();
};

class HordeArcher : public Hero {
    public:
        HordeArcher();

        void move();
};
