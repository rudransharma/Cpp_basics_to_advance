#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
int main(){
	int base , exp;
	cout<< "Enter the base- ";
	cin >> base;
	cout<< "Enter the exponent-";
	cin >> exp;
	double power = pow(base, exp);
	cout<< "The result is  " << power << std::endl;;
	return 0;
}
