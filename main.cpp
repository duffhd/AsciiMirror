#include <iostream>

#include "reverse.hpp"

const std::string ASCII_ART = R"(
  )  /\_/\   /
 (_ ( ^.^ ) /
   )  \"/
    ( | | )
   (__d b__))";

int main() {
    std::cout << "ASCII Mirror | rorriM IICSA" << '\n';
    AsciiMirror::reverse(ASCII_ART);

    return 0;
}
