#include "Player.h"
#include "Hero.h"
#include "GameMap.h"
#include "Army.h"
#include "HeroFabric.h"
#include <iostream>


void Player::startOfTurn() {

				for (auto& hero : army) {
								hero->debuffAttack();
				}
}

void Player::makeTurn(Player &rival) {
				

				if (army.size() == 0) {
								isLose = true;
								return;
				}
				startOfTurn();

				vector<bool> directions;
				vector<int> opponentsID;
				for (auto& hero : army) {
								cout << "�������� " << hero->getName() << " ����� : " << hero->getHealth() << " ��������\n";


								opponentsID = GameMap::getInstance().getOpponentsID(*hero);
								if (!opponentsID.empty()) {
												cout << "�������� " << hero->getName() << " ����� ��������� : \n";
												for (auto ID : opponentsID) cout << rival.getHeroByID(ID)->getName() << endl;;
								} else {
												cout << "� ���� ��� �������� : " << hero->getName() << " �� ����� ������ ��������� ! \n";
								}

								cout << "�������� �������� : 0 - ��������, 1 - ���������\n";
								int userChoice;
								cin >> userChoice;

								if (userChoice == 0) {
												directions = GameMap::getInstance().getAvailablePaths(*hero);
												cout << "�������� " << hero->getName() << " ����� �������� : \n";
												if (directions[0]) cout << "1)������,\n";
												if (directions[1]) cout << "2)�����,\n";
												if (directions[2]) cout << "3)����,\n";
												if (directions[3]) cout << "4)�����,\n";

												cout << "�������� �����������\n";
												int userChoiceDirection;
												cin >> userChoiceDirection;
												

												coordinate heroCoor = hero->getCoordinate();
												coordinate prevCoor = hero->getCoordinate();
												switch (userChoiceDirection) {
																case 1 : 
																				hero->setCoordinate({ heroCoor.y, heroCoor.x + hero->getDirection() });
																				break;
																case 2:
																				hero->setCoordinate({ heroCoor.y, heroCoor.x - hero->getDirection(), });
																				break;
																case 3:
																				hero->setCoordinate({ heroCoor.y - hero->getDirection(),heroCoor.x });

																				break;
																case 4:
																				hero->setCoordinate({ heroCoor.y + hero->getDirection(),heroCoor.x });
																				break;
																default:
																				break;
												}

												GameMap::getInstance().updateMap(*hero,prevCoor);
												GameMap::getInstance().printMap();

								} else if(!opponentsID.empty()){
												cout << "�������� ���������� ��� ����� : \n";
												for (size_t i = 0; i < opponentsID.size();i++) {
																Hero* opponent = rival.getHeroByID(opponentsID[i]);
																cout << i + 1 << ") " << opponent->getName() << "�� ��������� : " << opponent->getHealth();
												}
												
												int userAtackChoice;
												cin >> userAtackChoice;

												hero->attack(*rival.getHeroByID(userAtackChoice));
								}
				}
				
}

void Player::createArmy(HeroFabric& heroFabric) {

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

std::vector<Hero*> Player::getArmy() {
				return army;
}

Hero* Player::getHeroByID(int ID) {
				for (auto& hero : army) {
								if (hero->getId() == ID) return hero;
				}
}

bool Player::isLost() {
				return isLose;
}


