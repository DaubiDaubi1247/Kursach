#include "Hero.h"

class KittyWarrior : Hero {
    public : 
        KittyWarrior(string name, int health, Weapon& weapon) : Hero(name, health ,weapon){}

        void move() {

        }
};