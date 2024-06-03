//
//  main.cpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//


#include <iostream>
#include "Game.hpp"

using namespace std;

int main() {
    std::cout << "Ready to play Blackjack? \n" << std::endl;
    std::cout << "In this game, you will be playing against the dealer. \n" << std::endl;
    std::cout << "Rules: \n" << std::endl;
    std::cout << "Play: At the beginning of each round, all players are dealt two cards faceup, while the dealer is dealt one face up." << std::endl;
    std::cout << "Cards: Number cards (2-10) score the value indicated on them, face cards (Jack, Queen, King) score 10 points, and Ace can be treated as 1 or 11." << std::endl;
    std::cout << "Standing: You can choose to STAND (keep your current hand) or HIT (receive additional cards)." << std::endl;
    std::cout << "Blackjack: If your first two cards total 21, you have Blackjack." << std::endl;
    std::cout << "Busting: If your hand exceeds 21, you BUST and lose the game." << std::endl;
    cout << std::endl;
    
    string n1, n2;

    std::cout << "Enter player 1 name: ";
    std::cin >> n1;
    std::cout << "Enter player 2 name: ";
    std::cin >> n2;
    cout << std::endl;

    
    
    Game game;
    game.addPlayer(n1);
    game.addPlayer(n2);
    game.start();

    return 0;
}
