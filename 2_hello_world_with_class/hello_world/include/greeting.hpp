#pragma once

#include <iostream>
#include <string>
#include <array>
#include <numeric>

class Greeting
{
public:
    Greeting() :
        openings_{"Well hello, ",
                  "Welcome back, my dearest ",
                  "Wait, aren't you the legendary ",
                  "",
                  "In case I don’t see ya… good afternoon, good evening, and goodnight, "},
        endings_{"!", ".", "?", ", I am your father.", "!"}
    {}
    void greet(std::string const & name);
    void greet(std::string const & name, int option);
private:
    std::array<std::string, 5> openings_;
    std::array<std::string, 5> endings_;

    int getOption(std::string const & name);
};