#pragma once
#include <string>
#include "Coordinate.h"
using namespace std;

class Weapon;
class Debuff;


class Hero {
    protected : 
        string name;
        int health;
        Debuff* debuff = nullptr;
        Weapon* weapon = nullptr;
        coordinate coor;
        bool isDead = false;
        int id;
        int rangeMoving;
        int direction;

    public :   
        void decreaseHP(int hp);     
        void debuffAttack();    
        void attack(Hero& target);
        bool isDied();

        string getName();   
        int getHealth();
        int getId();
        int getDirection();
        Weapon& getWeapon();
        coordinate& getCoordinate();

        Hero& operator = (Hero& hero);

        void setDebuff(Debuff* debuff);
        void setCoordinate(coordinate coor);
        void setDir(int dir);
};
