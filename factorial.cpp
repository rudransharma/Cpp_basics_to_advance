#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
int main(){
	/*for(int i=10;i>0;i--){
		cout<<i<<std::endl;
	}
	return 0;
	*/
	#include <iostream>


    int factorial, num;

    std::cout << "Enter the number: ";
    std::cin >> num;

    factorial = num;

    if (num >= 0) {
        for (int i = num - 1; i > 0; i--) {
            factorial *= i;
        }
        std::cout << "Factorial of " << num << " is: " << factorial << std::endl;
    } else {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    }

    return 0;
}
