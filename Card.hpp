//
//  Card.hpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#ifndef Card_hpp
#define Card_hpp

#include <iostream>

class Card {
public:
    enum Rank {
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
    };

    enum Suit {
        CLUBS, DIAMONDS, HEARTS, SPADES
    };

    Card(Rank rank, Suit suit);
    Rank getRank() const;
    Suit getSuit() const;
    void display() const;
    int getValue() const;

private:
    Rank rank;
    Suit suit;
};

#endif /* Card_hpp */
