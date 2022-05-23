#pragma once

class Debuff;
class Hero;


class Weapon {
    protected : 
        Debuff& debuff;
        int damage;
        int range;
        
    public : 
        Weapon(Debuff& debuff,int damage, int range);

        int getDamage();
        Debuff& getDebuff();
        int getRange();

        void attack(Hero& target);
        
        Weapon* operator = (Weapon* weapon);

};