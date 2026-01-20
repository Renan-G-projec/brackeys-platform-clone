// Ad Maiorem Dei Gloriam!
#include "../include/game.hpp"

Game::Game() {}

void Game::run() {

    window.create({WWIDTH, WHEIGHT}, "Brackeys Platform Game - Clone");

    window.setFramerateLimit(TARGETFPS);

    // Game Loop
    while (window.isOpen()) {
        while(window.pollEvent(event)) {

            // Exiting
            if (event.type == event.Closed) {
                window.close();
                break;
            }

        }

        window.clear();
        window.display();
    }
}