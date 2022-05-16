
#include "Weapon.h"
#include "Weapons.h"

class Axe : public Weapon {

    enum AxeCharacteristic {
        DAMAGE = 10,
        RANGE = 1,
    };

    public : 
        Axe(Debuff* debuff) : Weapon(debuff,DAMAGE,RANGE){
    
        };
};