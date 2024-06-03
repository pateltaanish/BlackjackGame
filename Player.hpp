//
//  Player.hpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#ifndef Player_hpp
#define Player_hpp

#include <string>
#include <vector>
#include "Card.hpp"

class Player {
public:
    Player(const std::string& name);
    void addCard(const Card& card);
    void displayHand() const;
    int calculateScore() const;
    std::string getName() const;

protected:
    std::string name;
    std::vector<Card> hand;
};

#endif /* Player_hpp */
