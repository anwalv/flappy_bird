#pragma once
#include <string>

class Season {
public:
    Season(const std::string& name);
    void changeSeason(const std::string& name);
    std::string getBackgroundImage() const;

private:
    std::string name;
};
