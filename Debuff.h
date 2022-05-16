#pragma once
#include <string>
using namespace std;
class Hero;

class Debuff {
protected:
    string name;
    int times;
    int damage;

public:
    
    string getName() {
        return name;
    }

    Debuff(int times, int damage, string name){
        this->name = name;
        this->times = times;
        this->damage = damage;
    };

    virtual void debuffAttack(Hero& target) = 0;

    Debuff* operator = (Debuff* debuff) {
        this->damage = debuff->damage;
        this->name = debuff->name;
        this->times = debuff->times;
        return this;
    }

    Debuff (const Debuff& debuff)  {
        this->damage = debuff.damage;
        this->name = debuff.name;
        this->times = debuff.times;
    }
};