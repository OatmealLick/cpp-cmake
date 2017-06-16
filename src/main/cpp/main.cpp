#include <iostream>
#include "someclass/SomeClassHoldingInt.h"


int main() {
    SomeClassHoldingInt* intHolder = new SomeClassHoldingInt(6);
    std::cout << "Thats a rap bois: " << intHolder->getInt() << std::endl;
    return 0;
}