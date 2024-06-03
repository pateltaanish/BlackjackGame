//
//  Deck.hpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <vector>
#include "Card.hpp"

class Deck {
public:
    Deck();
    void shuffle();
    Card dealCard();

private:
    std::vector<Card> cards;
};

#endif /* Deck_hpp */
