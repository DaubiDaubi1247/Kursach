#include "Army.h"
#include "HeroFabric.h"
#include "Coordinate.h"
#include "Hero.h"

void Army::createArmy(HeroFabric& heroFabric) {

				army.push_back(heroFabric.createWarrior());
				army.push_back(heroFabric.createArcher());
				army.push_back(heroFabric.createKiller());

				static int direction = -1;

				static coordinate coorForWarrior = { 6,4 };
				static coordinate coorForArcher = { 7,7 };
				static coordinate coorForKiller = { 9,3 };

				army[0]->setCoordinate(coorForWarrior);
				army[0]->setDir(direction);
				army[1]->setCoordinate(coorForArcher);
				army[1]->setDir(direction);
				army[2]->setCoordinate(coorForKiller);
				army[2]->setDir(direction);


				coorForWarrior = { 4,4 };
				coorForArcher = { 3,7 };
				coorForKiller = { 0,3 };

				direction = 1;
}

std::vector<Hero*> Army::getArmy() {
				return army;
}

Hero* Army::getHeroByID(int ID) {
				for (auto& hero : army) {
								if (hero->getId() == ID) return hero;
				}
}

bool Army::isEmpty() {
				return army.size() == 0;
}