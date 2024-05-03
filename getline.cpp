#include <iostream>
#include <string>

using std::string;

int main() {
    string greetings;

    std::cout << "hello";
    std::cin >> greetings;
    std::cout << greetings << std::endl; // This will only print the first word

    std::cout << "test getline" << std::endl;

    // Clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    string greet;
    std::getline(std::cin, greet);
    std::cout << greet << std::endl;

    return 0;
}
