/**
 * Talib Pierson
 * 20 May 2020
 * rainbow.cpp
 * C++14
 *
 * Print rainbow using true-color ANSI escape code
 * Used to test terminal color support
 */

#include <iostream>

int main() {
    int red = 255;
    int green = 0;
    int blue = 0;

    while (red != 255 || green || blue != 1) {
        std::cout << "\x1b[48;2;" << red << ';' << green << ';' << blue << "m ";
        if (red && !blue) {
            if (green < 255) {
                // from red to yellow
                ++green;
            } else {
                // from yellow to green
                --red;
            }
        } else if (green && !red) {
            if (blue < 255) {
                // from green to cyan
                ++blue;
            } else {
                // from cyan to blue
                --green;
            }
        } else if (blue && !green) {
            if (red < 255) {
                // from blue to magenta
                ++red;
            } else {
                --blue;
                // from magenta almost to red
            }
        }
    }
    std::cout << "\x1b[0m" << std::endl;
}
