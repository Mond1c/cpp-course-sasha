#include <vector>
#include <iostream>

int main() {
    std::vector<int> a, b; // dynamic array (vector)
    //a.push_back(1);
    b.push_back(2);

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        a.push_back(i);
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ", ";
    }
    std::cout << std::endl;
    
    std::cout << a.size() << std::endl;
    a.pop_back();
    std::cout << a.size() << std::endl;
    return 0;
}