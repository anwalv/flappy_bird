#pragma once

class ScoreCounter {
public:
    ScoreCounter();
    void increase();
    void reset();
    int getScore() const;

private:
    int score;
};
