#pragma once

#include "base_sequence.hpp"
#include <random>
#include <chrono>
#include <string>

class RandomDNASequence : public BaseSequence<char>
{
public:
    RandomDNASequence();
    RandomDNASequence(unsigned int seed);
    ~RandomDNASequence() override = default;
    char next() override;
    std::string separator() override;
private:
    std::default_random_engine eng_;
    std::uniform_int_distribution<> dist_;
};
