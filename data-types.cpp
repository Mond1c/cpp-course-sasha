#include <cstdint>
#include <iostream>
#include <string>

int main() {
    // Data types:  int     long    long long
    // win64                32 bit
    // linux                64 bit  64 bit
    uint8_t a = 12; // 8 bit unsigned int
    int64_t b; // 64 bit
    // 10010101 = 1 * 2^7 + 0 * 2^6 + 0 * 2 ^ 5 +  1 * 2^4 + 0 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 *  2^0
    // 11111111 = -1 * 2^7 + 1 * 2^6 + 1 * 2^5 + 1 * 2^4 + 1 * 2^3 + 1 * 2^2 + 1 * 2^1 + 1 * 2^0 = -1
    // int32: -2^31..2^31-1
    // -1 = 11111111 (signed int) -> 11111111 (unsigned int) = 2^8
   // signed int c = -1; //
 //   std::cout << a << std::endl;
    float float1 = 1.23; // 4 bytes
    double double1 = 1.23; // 8 bytes
    char str[] = "hello"; // C-strings
    char d = '1';
    std::string string = "hello world"; // string

    bool boolean = (a >= 10) && (a < 100); // true
    // >= -> true/false
    // < -> true/false
    // && -> И
    // a >= 10 and a < 100
    // true and true

    // a = 2
    // auto c = true;



}
