#include <iostream>
#ifndef CARD_H
    #define CARD_H

    class Card{

        private:

            int cardNumber;
            int cardValue;
            std::string cardName;

        public:

            //Getters
            int getCardValue();
            std::string getCardName();

            //Setter
            void setCardNumber(int cardNumber);

            //Destructor
            ~Card();
            
            //Default constructor
            Card();

            //Secondary constructor
            Card(int cardNumber, int cardValue, std::string cardName);

            void Display();

            static void shuffleDeck(Card Deck[], int arraySize);
    };

#endif