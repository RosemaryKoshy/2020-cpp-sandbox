/**
 * Talib Pierson
 * 20 May 2020
 * hyperoperation.cpp
 * C++14
 * Print nth hyperoperation of a and b
 * Used to computer hyperoperations
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

int hyperoperation(int a, int b, std::size_t n) {
    switch (n) {
        case 0:
            return ++b;
        case 1:
            return a + b;
        case 2:
            return a * b;
        case 3:
            return powi(a, b);
        default:
            switch (b) {
                case 0:
                    return 1;
                case 1:
                    return a;
                case -1:
                    return 0;
                default:
                    switch (a) {
                        case 0:
                            return !(b % 2);
                        case 1:
                            return 1;
                        case 2:
                            if (b == 2)
                                return 4;
                        default:
                            return hyperoperation(a,
                                    hyperoperation(a, b - 1, n),
                                    n - 1);
                    }
            }
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
