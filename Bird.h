#pragma once
#include <vector>

class Bird{
public:
    Bird(float gravity);
    void jump();
    void fall();
    void update();
    bool isColliding(const std::vector<float>& pipePosition, float pipeWidth, float pipeHeight) const;
    std::vector<float> getPosition() const;
private:
    std::vector<float> position;
    float gravity;
};