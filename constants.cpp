#include <iostream>

// Macro for PI
#define PI 3.14159

// Constant variable for PI
const double PI_CONST = 3.14159;

// Enumeration for weekdays
enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    std::cout << "PI (macro): " << PI << std::endl;
    std::cout << "PI (const): " << PI_CONST << std::endl;

    Weekday today = FRIDAY;
    std::cout << "Today is: " << today << std::endl; // Output: Today is: 4 (since FRIDAY is the 4th enumerator)

    return 0;
}
