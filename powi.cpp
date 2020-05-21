/**
 * Talib Pierson
 * 20 May 2020
 * powi.cpp
 * C++14
 *
 * Print power of two integers.
 * Used to compute integer powers with positive exponents.
 */

#include <iostream>

int powi(int base, std::size_t exp) {
    int result = 1;
    for (; exp; exp >>= 1u) {
        if (exp & 1u)
            result *= base;
        base *= base;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cout << "Error: number of arguments is not 2" << std::endl;
        return 1;
    }
    std::cout << powi(std::stoi(argv[1]), std::stoi(argv[2])) << std::endl;
}
