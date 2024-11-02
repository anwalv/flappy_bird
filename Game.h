#pragma once
#include "Bird.h"
#include "Pipe.h"
#include "ScoreCounter.h"
#include "Difficulty.h"
#include "Season.h"
#include <vector>

class Game {
public:
    Game();
    void menu();
    void run();
    void update();
    void draw() const;
    void checkCollision();
    void updateScore();
    void end();

private:
    Bird bird;
    std::vector<Pipe> pipes;
    ScoreCounter score;
    Season currentSeason;
    Difficulty currentDifficulty;
};
