#include "Weapon.h"

class Bow : public Weapon {
				enum BowCharacteristic {
								DAMAGE = 15,
								RANGE = 3,
				};

public:
				Bow(Debuff* debuff) : Weapon(debuff, DAMAGE, RANGE) {

				};
};