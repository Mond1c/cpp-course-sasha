#include <iostream>

int main() {
    // [1, 2, 3]
    char another_str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int numbers[10];
    for (int i = 0; i < 10; ++i) {
        numbers[i] = i + 1;
    }
    numbers[0] = 100;
    // indexing starts from 0
    for (int i = 0; i < 10; ++i) {
        std::cout << numbers[i] << std::endl;
    }
    return 0;
}