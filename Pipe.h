#pragma once
#include <vector>

class Pipe{
public:
    Pipe(float gap, float width, float height);
    void update();
    std::vector<float> getPosition() const;
private:
    std::vector<float> position;
    float gap;
    float width;
    float height;
};