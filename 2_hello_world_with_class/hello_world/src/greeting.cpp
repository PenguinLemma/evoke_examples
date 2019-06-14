#include "greeting.hpp"

void Greeting::greet(std::string const & name)
{
    greet(name, getOption(name));
}

void Greeting::greet(std::string const & name, int option)
{
    if (name == "")
    {
        std::cout << "Come out, come out, wherever you are!" << std::endl;
        return;
    }
    if (option < 0 || option > openings_.size())
    {
        std::cout << name << ", " << name << ", " << name << "!" << std::endl;
        return;
    }
    std::cout << openings_[option] << name << endings_[option] << std::endl;
}

int Greeting::getOption(std::string const & name)
{
    int option = std::accumulate(name.begin(), name.end(), 0,
        [](int sum, char a){ return sum + static_cast<int>(a) - static_cast<int>('A') + 1; });
    return option%(openings_.size() + 1);
}