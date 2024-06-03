//
//  Game.hpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#ifndef Game_hpp
#define Game_hpp

#include "Dealer.hpp"
#include "Player.hpp"
#include "Deck.hpp"
#include <vector>
#include <queue>
#include <string>

class Game {
public:
    Game();
    void addPlayer(const std::string& playerName);
    void start();

private:
    Dealer dealer;
    std::queue<Player> playerQueue;
    Deck deck;
};

#endif /* Game_hpp */
