// Ad Maiorem Dei Gloriam!
#pragma once

#include "SFML/Graphics.hpp"

class Game {
public:
    Game();

    void run();

private:
    // Constants
    static constexpr unsigned int WWIDTH = 1280;
    static constexpr unsigned int WHEIGHT = 720;
    static constexpr unsigned int TARGETFPS = 60;

};