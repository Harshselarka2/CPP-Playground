#include <iostream>

int main() {
    int* p = new int[5];
    p[5] = 42;        // ❌ out-of-bounds write
    delete[] p;
}

