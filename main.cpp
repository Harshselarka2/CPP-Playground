#include <iostream>

int main() {
    int* p = new int[5];
    p[5] = 42;
    delete[] p;
}

