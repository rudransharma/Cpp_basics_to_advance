#include <iostream>
#include <string>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a: " << a << " " << "b: " << b << std::endl;
}

void swap(std::string& a, std::string& b) {
    std::string temp = a;
    a = b;
    b = temp;
    std::cout << "a: " << a << " " << "b: " << b << std::endl;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    swap(a, b);
    std::cout << a << " " << b;

    std::string c, d;
    std::cout << "Enter two words: ";
    std::cin >> c >> d;
    swap(c, d);

    return 0;
}{

