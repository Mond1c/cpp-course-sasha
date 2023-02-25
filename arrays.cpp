#include <iostream>

#define N 10

int main() {
    // [1, 2, 3]
    char another_str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    int numbers[N];
    for (int i = 0; i < N; ++i) {
        numbers[i] = i + 1;
    }
    numbers[0] = 100;
    // indexing starts from 0
    for (int i = 0; i < N; ++i) {
     //   std::cout << numbers[i] << std::endl;
    }
    numbers[1] = -20;
    for (int i : numbers) {// for each ; i = numbers[..]
   //     std::cout << i << std::endl;
    }        
    //std::cout << std::size(numbers) << std::endl;
    //std::cout << sizeof(numbers) / sizeof(int) << std::endl;



    return 0;
}