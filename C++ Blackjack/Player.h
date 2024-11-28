#include <iostream>
#ifndef PLAYER_H
    #define PLAYER_H

    class Player{

        private:

            std::string playerName;
            int cardsDrawn, currentScore, totalScore;

        public:

            //Getters
            std::string getPlayerName();
            int getCardsDrawn();
            int getCurrentScore();
            int getTotalScore();

            //Setters
            void setPlayerName(std::string playerName);
            void setCardsDrawn(int cardsDrawn);
            void setCurrentScore(int currentScore);
            void setTotalScore(int totalScore);

            //Destructor
            ~Player();

            //Default constructor
            Player();

            //Secondary constructor
            Player(std::string playerName, int cardsDrawn, int currentScore, int totalScore);

    };

#endif