#include <iostream>

int main() {
    // int a =  10;
    // // std::cout << &a << std::endl;
    // int* ptr = &a;
    // std::cout << *ptr << std::endl;

    int *ptr2 = new int(10);
    std::cout << ptr2 << " " <<  ptr2 + 1 << " -> " << *(ptr2 + 1) << std::endl;

    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        *(arr + i) = (i + 1) * 10;
    }

    // for (int i = 0; i < 5; i++) {
    //     std::cout << arr[i] << std::endl;
    // }

    std::cout << arr[2] << " " << *(arr + 2) << std::endl;

    return 0;
}