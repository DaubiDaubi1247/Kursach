#pragma once
#include "Weapon.h"

class Axe : public Weapon {
				enum AxeCharacteristic {
								DAMAGE = 30,
								RANGE = 1,
				};

				public : 
								Axe(Debuff& debuff);
};

class Bow : public Weapon {
				enum BowCharacteristic {
								DAMAGE = 15,
								RANGE = 2,
				};

				public : 
								Bow(Debuff& debuff);
};

class Blade : public Weapon {
				enum BowCharacteristic {
								DAMAGE = 20,
								RANGE = 1,
				};

				public :
								Blade(Debuff& debuff);
};

