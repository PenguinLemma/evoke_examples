#pragma once

#include "base_sequence.hpp"
#include <string>

class Fibonacci : public BaseSequence<int>
{
public:

    Fibonacci();
    Fibonacci(int, int);
    ~Fibonacci() override = default;
    int next() override;
    std::string separator() override;
private:
    int second_prev_;
    int prev_;
};
