#include <iostream>

#include "printer.hpp"
#include "fibonacci.hpp"
#include "random_dna_sequence.hpp"


int main()
{
    Printer printer;

    Fibonacci fib;
    std::cout << "PRINT 10 following terms of Fibonacci sequence starting with 0 1" << std::endl;
    printer.print(fib, 10U);
    std::cout << std::endl;

    Fibonacci fib2_5{2, 5};
    std::cout << "PRINT 8 following terms of Fibonacci sequence starting with 2 5" << std::endl;
    printer.print(fib2_5, 8U);
    std::cout << std::endl;

    RandomDNASequence new_hero;
    std::cout << "PRINT a random dna sequence of length 30" << std::endl;
    printer.print(new_hero, 30U);
}