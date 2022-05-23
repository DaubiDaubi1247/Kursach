#include "Hero.h"
#include "GameMap.h"
#include "Weapon.h"
#include "Player.h"
#include <iostream>

GameMap::GameMap() {
				for (size_t i = 0; i < ROW; i++) {
								vector<int> row(10);
								mapMatrix.push_back(row);
				}

				for (size_t i = 0; i < ROW; i++) {
								vector<char> row;
								for (size_t j = 0; j < COLUMN; j++) {
												row.push_back(' ');
								}
								matrixForPrint.push_back(row);
				}
}

GameMap& GameMap::getInstance() {
				static GameMap instance;
				return instance;
}

void GameMap::printMap() {
				for (size_t i = 0; i < ROW; i++) {
								for (size_t j = 0; j < COLUMN; j++)
												std::cout << " | " << matrixForPrint[i][j] << " | ";
								std::cout << std::endl;
				}
				
				cout << endl;
}

void GameMap::setHeroInMap(Hero& hero) {
				coordinate heroCoor = hero.getCoordinate();

				mapMatrix[heroCoor.y][heroCoor.x] = hero.getId();
				
				matrixForPrint[heroCoor.y][heroCoor.x] = hero.getName()[0];
}



bool GameMap::isValidDirection(coordinate point) {
				return (point.y < 10 && point.y >= 0) && (point.x < 10 && point.x >= 0) ;  // для другого игрока * -1 осталось прилумать предлог
}

vector<bool> GameMap::getAvailablePaths(Hero& hero) {
				vector<bool> directions{false,false,false,false};
				coordinate heroCoor = hero.getCoordinate();
				
				if (isValidDirection({heroCoor.y,heroCoor.x + 1})&& !isOpponent({ heroCoor.y,heroCoor.x + 1})) {
								directions[0] = true;
				}

				if (isValidDirection({ heroCoor.y,heroCoor.x - 1 }) && !isOpponent({ heroCoor.y,heroCoor.x - 1 })) {
								directions[1] = true;
				}

				if (isValidDirection({ heroCoor.y + 1,heroCoor.x }) && !isOpponent({ heroCoor.y + 1,heroCoor.x }) && hero.getDirection() != -1) {
								directions[2] = true;
				}

				if (isValidDirection({ heroCoor.y - 1,heroCoor.x }) && !isOpponent({ heroCoor.y - 1,heroCoor.x }) && hero.getDirection() != 1) {
								directions[3] = true;
				}
				
				return directions;			
}

bool GameMap::isOpponent(coordinate point) {
				return isValidDirection(point) && mapMatrix[point.y][point.x] != 0;
}

int GameMap::getOpponentID(coordinate point) {
				return mapMatrix[point.y][point.x];
}

vector<int> GameMap::getOpponentsID(Hero& hero) {
				vector<int> opponentsID;
				int weaponRange = hero.getWeapon().getRange();
				coordinate heroCoor = hero.getCoordinate();

				coordinate newPoint = { heroCoor.y,heroCoor.x + weaponRange };
				if (isOpponent(newPoint)) {
								opponentsID.push_back(getOpponentID(newPoint));
				}
				
				newPoint = { heroCoor.y,heroCoor.x - weaponRange };
				if (isOpponent(newPoint)) {
								opponentsID.push_back(getOpponentID(newPoint));
				}
				
				newPoint = { heroCoor.y + weaponRange ,heroCoor.x };
				if (hero.getDirection() != -1 && isOpponent(newPoint)) {
								opponentsID.push_back(getOpponentID(newPoint));
				}
				
				newPoint = { heroCoor.y - weaponRange,heroCoor.x };
				if (hero.getDirection() != 1 && isOpponent(newPoint)) {
								opponentsID.push_back(getOpponentID(newPoint));
				}

				return opponentsID;

}

void GameMap::updateMap(Hero& hero, coordinate prevCoor) {
				coordinate newCoor = hero.getCoordinate();

				mapMatrix[prevCoor.y][prevCoor.x] = 0;
				matrixForPrint[prevCoor.y][prevCoor.x] = ' ';
				setHeroInMap(hero);
}
