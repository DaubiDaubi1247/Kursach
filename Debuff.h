#pragma once
#include <string>
using namespace std;
class Hero;

class Debuff {
protected:
    std::string name;
    int times;
    int damage;

public:
    
    std::string getName();

    Debuff(int times, int damage, std::string name);

    virtual void debuffAttack(Hero& target) = 0;

    Debuff* operator = (Debuff* debuff);

    Debuff (const Debuff& debuff);
};