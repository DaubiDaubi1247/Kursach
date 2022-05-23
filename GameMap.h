#pragma once
#include <vector>

class Hero;
struct coordinate;

class GameMap {
private:
				enum MatrixSize {
								ROW = 10,
								COLUMN = 10
				};

				GameMap();
				GameMap(const GameMap&);
				//GameMap& operator=(GameMap&);

				std::vector<std::vector<int>> mapMatrix;
				std::vector<std::vector<char>> matrixForPrint;

				bool isValidDirection(coordinate point);
				bool isOpponent(coordinate point);
				int getOpponentID(coordinate point);

public:

				void printMap();
				void updateMap(Hero& Hero,coordinate prevCoor);

				void setHeroInMap(Hero& hero);

				static GameMap& getInstance();
				std::vector<bool> getAvailablePaths(Hero& hero);
				std::vector<int> getOpponentsID(Hero& hero);
};
