#pragma once
#include <string>

using namespace std;

class Weapon;
class Debuff;

struct point 	{
    int x;
    int y;
};

class Hero {
    protected : 
        string name;
        int health;
        Debuff* debuff = nullptr;
        Weapon* weapon = nullptr;
        point coordinate;
        bool isDie = false;

    public : 
        
        bool isDead();
       /* Hero();*/
        virtual void move() = 0;

        void attack(Hero& target);

        string getName();
        
        int getHealth();

        void decreaseHP(int hp);
        
        void setDebuff(Debuff* debuff);

        void debuffAttack();
    
        Hero& operator = (Hero& hero);

};
