#include "Hero.h"

class KittyArcher : Hero {
    public:
        KittyArcher(string name, int health, Weapon& weapon) : Hero(name, health, weapon) {}

        void move() {

        }
};