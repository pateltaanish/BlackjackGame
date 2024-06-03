//
//  Player.cpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#include "Player.hpp"
#include <iostream>

Player::Player(const std::string& name) : name(name) {}

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

void Player::displayHand() const {
    std::cout << name << "'s hand:" << std::endl;
    for (const Card& card : hand) {
        card.display();
        std::cout << std::endl;
    }
}

int Player::calculateScore() const {
    int score = 0;
    int numAces = 0;

    for (const Card& card : hand) {
        int value = card.getValue();
        if (card.getRank() == Card::ACE) {
            numAces++;
        } else {
            score += value;
        }
    }

    for (int i = 0; i < numAces; ++i) {
        if (score + 11 <= 21) {
            score += 11;
        } else {
            score += 1;
        }
    }

    return score;
}

std::string Player::getName() const {
    return name;
}

