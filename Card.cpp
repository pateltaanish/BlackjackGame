//
//  Card.cpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#include "Card.hpp"

Card::Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}

int Card::getValue() const {
    if (rank >= JACK) return 10;
    else return rank;
}

Card::Rank Card::getRank() const {
    return rank;
}

Card::Suit Card::getSuit() const {
    return suit;
}

void Card::display() const {
    switch (rank) {
        case ACE:
            std::cout << "Ace";
            break;
        case TWO:
            std::cout << "2";
            break;
        case THREE:
            std::cout << "3";
            break;
        case FOUR:
            std::cout << "4";
            break;
        case FIVE:
            std::cout << "5";
            break;
        case SIX:
            std::cout << "6";
            break;
        case SEVEN:
            std::cout << "7";
            break;
        case EIGHT:
            std::cout << "8";
            break;
        case NINE:
            std::cout << "9";
            break;
        case TEN:
            std::cout << "10";
            break;
        case JACK:
            std::cout << "Jack";
            break;
        case QUEEN:
            std::cout << "Queen";
            break;
        case KING:
            std::cout << "King";
            break;
    }

    // Display the suit
    switch (suit) {
        case CLUBS:
            std::cout << " of Clubs";
            break;
        case DIAMONDS:
            std::cout << " of Diamonds";
            break;
        case HEARTS:
            std::cout << " of Hearts";
            break;
        case SPADES:
            std::cout << " of Spades";
            break;
    }
}
