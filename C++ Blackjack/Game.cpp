#include <iostream>
#include <algorithm>
#include "Card.h"
#include "Player.h"

void startGame(Card Deck[], Player& Player1);
void playerHit(Card Deck[], Player& Player1);
void calculatePlayerScore(Card Deck[], Player& Player1);
void calculateHouseScore(Card Deck[], Player& Player1);

int main(){

    std::string playerName;
    char gameChoice;

    Player Player1;

    //Initializing array
    Card Deck[52];

    for (int count = 0; count < 52; count++){
        Deck[count].setCardNumber(count);
    }
    
    //Prompting player for first name
    std::cout << "Please enter your first name: ";
    std::getline(std::cin, playerName);

    Player1.setPlayerName(playerName);

    std::cout << "\nWelcome, " << Player1.getPlayerName() << std::endl;

    //Main loop for starting and exiting game
    while (true){
        std::cout << "\nPlease select an option:";
        std::cout << "\na) Start New Game" << "\nb) Exit" << std::endl;
        std::cin >> gameChoice;

        if (gameChoice == 'a' || gameChoice == 'A'){
            startGame(Deck, Player1);

        }

        else if (gameChoice == 'b' || gameChoice == 'B'){
            std::cout << "\nExiting game...";
            exit(0);
        }

        else {
            std::cout << "\nInvalid input\n";
        }
    }

    return 0;
}

void startGame(Card Deck[], Player& Player1){

    char playerChoice;
    int playerScore = 0; 

    Card::shuffleDeck(Deck, 52);

    std::cout << "\nStarting game...\n";
    std::cout << "\n---------------------";
    std::cout << "\nPlayer's total score:\n" << Player1.getTotalScore();
    std::cout << "\n---------------------";

    //Adding first two card values to player's current score
    playerScore += Deck[0].getCardValue();
    playerScore += Deck[1].getCardValue();

    Player1.setCurrentScore(playerScore);

    //Updating player cards drawn (counting 0 as a card)
    Player1.setCardsDrawn(1);

    std::cout << "\n\nDealing hand to player...\n\n";
    std::cout << Deck[0].getCardName() << " worth " << Deck[0].getCardValue() << " point(s)" << std::endl;
    std::cout << Deck[1].getCardName() << " worth " << Deck[1].getCardValue() << " point(s)" << std::endl;

    std::cout << "\nPlayer's score: " << Player1.getCurrentScore() << std::endl;

    //Loop for hit stay prompt
    while (Player1.getCurrentScore() <= 21){
        
        std::cout << "\nPlease select an option:";
        std::cout << "\na) Hit" << "\nb) Stay" << std::endl;
        std::cin >> playerChoice;

        if (playerChoice == 'a' || playerChoice == 'A'){
            playerHit(Deck, Player1);
        }

        else if (playerChoice == 'b' || playerChoice == 'B'){
            calculateHouseScore(Deck, Player1);
            break;
        }

        else {
            std::cout << "\nInvalid input\n";
        }
    }
    
}

void playerHit(Card Deck[], Player& Player1){

    int arrayPosition = 0;
    
    //Dealing player new card, updating score and displaying
    std::cout << "\nDealing new card to player...\n\n";

    Player1.setCardsDrawn(Player1.getCardsDrawn() + 1);

    arrayPosition = Player1.getCardsDrawn();
    std::cout << Deck[arrayPosition].getCardName() << " worth " << Deck[arrayPosition].getCardValue() << " point(s)" << std::endl;
    
    //Calculating player's new score
    calculatePlayerScore(Deck, Player1);

    if (Player1.getCurrentScore() <= 21){
        std::cout << "\nPlayer's score: " << Player1.getCurrentScore() << std::endl;
    }

}
void calculatePlayerScore(Card Deck[], Player& Player1){

    int cardValue = 0;

    //Calculating player's new score
    cardValue = Deck[Player1.getCardsDrawn()].getCardValue();

    Player1.setCurrentScore(Player1.getCurrentScore() + cardValue);

    //If player busts, they lose
    if (Player1.getCurrentScore() > 21){

        Player1.setTotalScore(Player1.getTotalScore() - 50);
        std::cout << "\nPlayer's score: " << Player1.getCurrentScore() << std::endl;
        std::cout << "\nPlayer busts!\n" << "House Wins!\n" "-50 points\n" << "Game Over\n";

    }
}

void calculateHouseScore(Card Deck[], Player& Player1){

    int houseScore = 0;
    int arrayPosition = 0;

    std::cout << "\nDealing cards to house...\n\n";

    //Adding cards to house's hand
    while (houseScore < Player1.getCurrentScore()){

        Player1.setCardsDrawn(Player1.getCardsDrawn() + 1);

        arrayPosition = Player1.getCardsDrawn();
        std::cout << Deck[arrayPosition].getCardName() << " worth " << Deck[arrayPosition].getCardValue() << " point(s)" << std::endl;

        houseScore += Deck[arrayPosition].getCardValue();
        
    }

    std::cout << "\nHouse's score: " << houseScore << std::endl;

    //Loses if house has a higher score, wins if player has a higher score or house busts
    if (houseScore > 21) {
        std::cout << "\nHouse busts!\n" << "Player wins!\n" << "+50 points\n";
        Player1.setTotalScore(Player1.getTotalScore() + 50);
    }

    else if (houseScore >= Player1.getCurrentScore()){
        std::cout << "\nHouse wins!\n" << "-50 points\n" << "Game Over\n";
        Player1.setTotalScore(Player1.getTotalScore() - 50);
    }

    else {
        std::cout << "\nPlayer wins!\n" << "+50 points\n";
        Player1.setTotalScore(Player1.getTotalScore() + 50);
    }
    
}