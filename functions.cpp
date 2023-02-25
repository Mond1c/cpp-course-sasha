#include <iostream>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            std::cout << ", ";
        }
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int res = mul(1, 2);
    std::cout << res << std::endl;
    int arr[10], arr2[15];
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 15; i++) {
        arr2[i] =i + 1;
    }

    print_array(arr, std::size(arr));
    arr[0] = 100;
    print_array(arr, 10);
    print_array(arr2, 15);

    return 0;
}