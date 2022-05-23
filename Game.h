#pragma once

class Player;

class Game {
    private : 
        Player* firstPlayer;
        Player* secondPlayer;

        void initPlayer(Player& player);
        void initPlayers();

    public : 
        Game();
        void startOfGame();
        void gameProcess();
        void endOfGame();
};
