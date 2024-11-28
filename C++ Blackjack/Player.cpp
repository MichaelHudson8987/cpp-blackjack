#include "Player.h"
#include <algorithm>

//Getters
std::string Player::getPlayerName(){
    return this->playerName;
}

int Player::getCardsDrawn(){
    return this->cardsDrawn;
}

int Player::getCurrentScore(){
    return this->currentScore;
}

int Player::getTotalScore(){
    return this->totalScore;
}

//Setters
void Player::setPlayerName(std::string playerName){
    this->playerName = playerName;
}
void Player::setCardsDrawn(int cardsDrawn){
    this->cardsDrawn = cardsDrawn;
}

void Player::setCurrentScore(int currentScore){
    this->currentScore = currentScore;
}

void Player::setTotalScore(int totalScore){
    this->totalScore = totalScore;
}

//Destructor
Player::~Player(){}

//Default constructor
Player::Player(){
    this->playerName = "";
    this->cardsDrawn = 0;
    this->currentScore = 0;
    this->totalScore = 0;
}

//Secondary constructor
Player::Player(std::string playerName, int cardsDrawn, int currentScore, int totalScore){
    this->playerName = playerName;
    this->cardsDrawn = cardsDrawn;
    this->currentScore = currentScore;
    this->totalScore = totalScore;
}