/**
 * Talib Pierson
 * 20 May 2020
 * font_test.cpp
 * C++14
 * Print Basic Latin and Latin-1 Supplement Unicode characters.
 * Used to test terminal font.
 */

#include <iostream>

int main() {
    std::cout << " !\"#$%&'()*+,-./0123456789:;<=>?\n"
                 "@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_\n"
                 "`abcdefghijklmnopqrstuvwxyz{|}~\n"
                 " ¡¢£¤¥¦§¨©ª«¬\u00AD®¯°±²³´µ¶·¸¹º»¼½¾¿\n"
                 "ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß\n"
                 "àáâãäåæçèéêëìíîïðñòóôõö÷øùúûüýþÿ"
              << std::endl;
}
