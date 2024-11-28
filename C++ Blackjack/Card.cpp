#include "Card.h"
#include <algorithm>
#include <random>

//Getters
int Card::getCardValue(){
    return this->cardValue;
}

std::string Card::getCardName(){
    return this->cardName;
}

//Setter
void Card::setCardNumber(int cardNumber){

    //Assigns card number, value, and name based on position in array
    switch (cardNumber){

        case 0:
        this->cardNumber = 1;
        this->cardValue = 1;
        this->cardName = "Ace of Clubs";
        break;

        case 1:
        this->cardNumber = 2;
        this->cardValue = 2;
        this->cardName = "Two of Clubs";
        break;

        case 2:
        this->cardNumber = 3;
        this->cardValue = 3;
        this->cardName = "Three of Clubs";
        break;

        case 3:
        this->cardNumber = 4;
        this->cardValue = 4;
        this->cardName = "Four of Clubs";
        break;

        case 4:
        this->cardNumber = 5;
        this->cardValue = 5;
        this->cardName = "Five of Clubs";
        break;

        case 5:
        this->cardNumber = 6;
        this->cardValue = 6;
        this->cardName = "Six of Clubs";
        break;

        case 6:
        this->cardNumber = 7;
        this->cardValue = 7;
        this->cardName = "Seven of Clubs";
        break;

        case 7:
        this->cardNumber = 8;
        this->cardValue = 8;
        this->cardName = "Eight of Clubs";
        break;

        case 8:
        this->cardNumber = 9;
        this->cardValue = 9;
        this->cardName = "Nine of Clubs";
        break;

        case 9:
        this->cardNumber = 10;
        this->cardValue = 10;
        this->cardName = "Ten of Clubs";
        break;

        case 10:
        this->cardNumber = 11;
        this->cardValue = 10;
        this->cardName = "Jack of Clubs";
        break;

        case 11:
        this->cardNumber = 12;
        this->cardValue = 10;
        this->cardName = "Queen of Clubs";
        break;

        case 12:
        this->cardNumber = 13;
        this->cardValue = 10;
        this->cardName = "King of Clubs";
        break;

        case 13:
        this->cardNumber = 14;
        this->cardValue = 1;
        this->cardName = "Ace of Diamonds";
        break;

        case 14:
        this->cardNumber = 15;
        this->cardValue = 2;
        this->cardName = "Two of Diamonds";
        break;

        case 15:
        this->cardNumber = 16;
        this->cardValue = 3;
        this->cardName = "Three of Diamonds";
        break;

        case 16:
        this->cardNumber = 17;
        this->cardValue = 4;
        this->cardName = "Four of Diamonds";
        break;

        case 17:
        this->cardNumber = 18;
        this->cardValue = 5;
        this->cardName = "Five of Diamonds";
        break;

        case 18:
        this->cardNumber = 19;
        this->cardValue = 6;
        this->cardName = "Six of Diamonds";
        break;

        case 19:
        this->cardNumber = 20;
        this->cardValue = 7;
        this->cardName = "Seven of Diamonds";
        break;

        case 20:
        this->cardNumber = 21;
        this->cardValue = 8;
        this->cardName = "Eight of Diamonds";
        break;

        case 21:
        this->cardNumber = 22;
        this->cardValue = 9;
        this->cardName = "Nine of Diamonds";
        break;

        case 22:
        this->cardNumber = 23;
        this->cardValue = 10;
        this->cardName = "Ten of Diamonds";
        break;

        case 23:
        this->cardNumber = 24;
        this->cardValue = 10;
        this->cardName = "Jack of Diamonds";
        break;

        case 24:
        this->cardNumber = 25;
        this->cardValue = 10;
        this->cardName = "Queen of Diamonds";
        break;

        case 25:
        this->cardNumber = 26;
        this->cardValue = 10;
        this->cardName = "King of Diamonds";
        break;

        case 26:
        this->cardNumber = 27;
        this->cardValue = 1;
        this->cardName = "Ace of Hearts";
        break;

        case 27:
        this->cardNumber = 28;
        this->cardValue = 2;
        this->cardName = "Two of Hearts";
        break;

        case 28:
        this->cardNumber = 29;
        this->cardValue = 3;
        this->cardName = "Three of Hearts";
        break;

        case 29:
        this->cardNumber = 30;
        this->cardValue = 4;
        this->cardName = "Four of Hearts";
        break;

        case 30:
        this->cardNumber = 31;
        this->cardValue = 5;
        this->cardName = "Five of Hearts";
        break;

        case 31:
        this->cardNumber = 32;
        this->cardValue = 6;
        this->cardName = "Six of Hearts";
        break;

        case 32:
        this->cardNumber = 33;
        this->cardValue = 7;
        this->cardName = "Seven of Hearts";
        break;

        case 33:
        this->cardNumber = 34;
        this->cardValue = 8;
        this->cardName = "Eight of Hearts";
        break;

        case 34:
        this->cardNumber = 35;
        this->cardValue = 9;
        this->cardName = "Nine of Hearts";
        break;

        case 35:
        this->cardNumber = 36;
        this->cardValue = 10;
        this->cardName = "Ten of Hearts";
        break;

        case 36:
        this->cardNumber = 37;
        this->cardValue = 10;
        this->cardName = "Jack of Hearts";
        break;

        case 37:
        this->cardNumber = 38;
        this->cardValue = 10;
        this->cardName = "Queen of Hearts";
        break;

        case 38:
        this->cardNumber = 39;
        this->cardValue = 10;
        this->cardName = "King of Hearts";
        break;

        case 39:
        this->cardNumber = 40;
        this->cardValue = 1;
        this->cardName = "Ace of Spades";
        break;

        case 40:
        this->cardNumber = 41;
        this->cardValue = 2;
        this->cardName = "Two of Spades";
        break;

        case 41:
        this->cardNumber = 42;
        this->cardValue = 3;
        this->cardName = "Three of Spades";
        break;

        case 42:
        this->cardNumber = 43;
        this->cardValue = 4;
        this->cardName = "Four of Spades";
        break;

        case 43:
        this->cardNumber = 44;
        this->cardValue = 5;
        this->cardName = "Five of Spades";
        break;

        case 44:
        this->cardNumber = 45;
        this->cardValue = 6;
        this->cardName = "Six of Spades";
        break;

        case 45:
        this->cardNumber = 46;
        this->cardValue = 7;
        this->cardName = "Seven of Spades";
        break;

        case 46:
        this->cardNumber = 47;
        this->cardValue = 8;
        this->cardName = "Eight of Spades";
        break;

        case 47:
        this->cardNumber = 48;
        this->cardValue = 9;
        this->cardName = "Nine of Spades";
        break;

        case 48:
        this->cardNumber = 49;
        this->cardValue = 10;
        this->cardName = "Ten of Spades";
        break;

        case 49:
        this->cardNumber = 50;
        this->cardValue = 10;
        this->cardName = "Jack of Spades";
        break;

        case 50:
        this->cardNumber = 51;
        this->cardValue = 10;
        this->cardName = "Queen of Spades";
        break;

        case 51:
        this->cardNumber = 52;
        this->cardValue = 10;
        this->cardName = "King of Spades";
        break;
    }
}

//destructor
Card::~Card(){}

//default constructor
Card::Card(){
    this->cardNumber = 0;
    this->cardValue = 0;
    this->cardName = "";
}

//secondary constructor
Card::Card(int cardNumber, int cardValue, std::string cardName){
    this->cardNumber = cardNumber;
    this->cardValue = cardValue;
    this->cardName = cardName;
}

void Card::Display(){
    std::cout << "\nCard Number: " << this->cardNumber << std::endl;
    std::cout << "Card Value: " << this->cardValue << std::endl;
    std::cout << "Card Name: " << this->cardName << std::endl;
}

void Card::shuffleDeck(Card Deck[], int arraySize){

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(Deck, Deck + arraySize, g);
}
