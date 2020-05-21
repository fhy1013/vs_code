#include "test.h"

#include <iostream>

bool Test() {
    int x = 0;
    x += 7;
    if (x > 0)
        return true;
    else
        return false;
}

void TestFunc1(int x) {
    if (x > 0) {
        // x > 0
        std::cout << x << std::endl;
    } else {
        /* code */
        // x <= 0
        std::cout << -x << std::endl;
    }
}