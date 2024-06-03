//
//  Dealer.cpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#include "Dealer.hpp"
#include <iostream>

Dealer::Dealer(const std::string& name) : Player(name), deckPtr(nullptr) {}

void Dealer::setDeck(Deck& deck) {
    deckPtr = &deck;
}

void Dealer::play() {
    std::cout << "Dealer's turn:" << std::endl;
    
    while (calculateScore() < 17) {
        std::cout << "Dealer hits." << std::endl;
        addCard(deckPtr->dealCard());
    }
    
    std::cout << "Dealer's final hand:" << std::endl;
    displayHand();
}
