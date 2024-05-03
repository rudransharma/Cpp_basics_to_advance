#include <iostream>
#include <string>

void printString(const std::string& str) {
    // The function cannot modify the value of 'str'
    std::cout << "String: " << str + "bye" << std::endl;
}

int main() {
    std::string message = "Hello, World!";

    // Call the function, passing the string by const reference
    printString(message);

    // The value of 'message' remains unchanged
    std::cout << "Original message: " << message << std::endl;

    return 0;
}
