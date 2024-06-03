//
//  Deck.cpp
//  Blackjack
//
//  Created by Taanish Patel on 5/9/24.
//

#include "Game.hpp"
#include <iostream>
#include <algorithm>

Game::Game() : dealer("Dealer") {}

void Game::addPlayer(const std::string& playerName) {
    playerQueue.push(Player(playerName));
}

void Game::start() {
    // Shuffle the deck
    deck.shuffle();

    // Deal two cards to each player and the dealer
    std::queue<Player> tempQueue = playerQueue;
    while (!tempQueue.empty()) {
        Player& player = tempQueue.front();
        player.addCard(deck.dealCard());
        player.addCard(deck.dealCard());
        tempQueue.pop();
    }
    dealer.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());

    // Player turns
    while (!playerQueue.empty()) {
        Player player = playerQueue.front();
        playerQueue.pop();

        std::cout << player.getName() << "'s turn: \n" << std::endl;
        player.displayHand();
        while (player.calculateScore() < 21) {
            std::cout << "Do you want to hit or stand? (H/S): ";
            char choice;
            std::cin >> choice;
            if (choice == 'H' || choice == 'h') {
                player.addCard(deck.dealCard());
                player.displayHand();
            } else {
                break;
            }
        }

        // If player did not bust, requeue them for result comparison
        if (player.calculateScore() <= 21) {
            playerQueue.push(player);
        }
    }

    // Dealer's turn
    dealer.setDeck(deck);
    dealer.play();

    // Determine winners
    int dealerScore = dealer.calculateScore();
    std::cout << "Dealer's score: " << dealerScore << std::endl;

    // Compare scores
    while (!playerQueue.empty()) {
        Player player = playerQueue.front();
        playerQueue.pop();
        int playerScore = player.calculateScore();
        std::cout << player.getName() << "'s score: " << playerScore << std::endl;
        if (playerScore > 21) {
            std::cout << player.getName() << " busts and loses." << std::endl;
        } else if (dealerScore > 21 || playerScore > dealerScore) {
            std::cout << player.getName() << " wins!" << std::endl;
        } else if (playerScore == dealerScore) {
            std::cout << player.getName() << " pushes (ties) with the dealer." << std::endl;
        } else {
            std::cout << player.getName() << " loses." << std::endl;
        }
    }
}
