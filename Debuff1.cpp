#include "Debuff.h"

string Debuff::getName() {
    return name;
}

Debuff::Debuff(int times, int damage, string name) {
    this->name = name;
    this->times = times;
    this->damage = damage;
};

Debuff* Debuff::operator = (Debuff* debuff) {
    this->damage = debuff->damage;
    this->name = debuff->name;
    this->times = debuff->times;
    return this;
}

Debuff::Debuff(const Debuff& debuff) {
    this->damage = debuff.damage;
    this->name = debuff.name;
    this->times = debuff.times;
}