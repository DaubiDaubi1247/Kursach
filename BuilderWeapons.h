#include "Weapon.h"

class BuilderWeapons {
    protected : 
        Weapon * weapon;

    public : 
        BuilderWeapons(){
            weapon = nullptr;
        };

        void createWeapon() {
            weapon = new Weapon();
        }
        virtual void buildDebuff() = 0;
        virtual void buildDamage() = 0;
        virtual void buildRange() = 0;

        Weapon* getWeapon() {
            return weapon;
        }
};  