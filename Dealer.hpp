//
//  Dealer.hpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#ifndef Dealer_hpp
#define Dealer_hpp

#include "Player.hpp"
#include "Deck.hpp"

class Dealer : public Player {
public:
    Dealer(const std::string& name);
    void setDeck(Deck& deck);
    void play();

private:
    Deck* deckPtr;
};


#endif /* Dealer_hpp */
