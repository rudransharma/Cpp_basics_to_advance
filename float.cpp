#include <iostream>

int main() {
    float floatNum = 3.14159f;       // Suffix 'f' or 'F' for float literals
    double doubleNum = 3.14159265358979;
    long double longDoubleNum = 3.14159265358979323846L;  // Suffix 'L' or 'l' for long double literals

    std::cout << "Float: " << floatNum << std::endl;
    std::cout << "Double: " << doubleNum << std::endl;
    std::cout << "Long Double: " << longDoubleNum << std::endl;

    return 0;
}
