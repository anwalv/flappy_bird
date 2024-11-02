#pragma once
#include <string>

class Difficulty {
public:
    Difficulty(const std::string& difficulty);
    void changeDifficulty(const std::string& difficulty);
    float getSpeedPipes() const;

private:
    std::string difficulty;
    float speedPipes;
};
