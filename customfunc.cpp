#include<iostream>
using std::cout;
using std::cin;

double power( double base , int exponent){
       double result = 1;
   for (int i=0; i<exponent; i++){
    		result = result*base;
   }

	return result;
}
int main (){
	int base, exp;
	cout<<"Enter the base:";
	cin>>base;
	cout<<"Enter the exponent:";
	cin>> exp;
	cout<<"the answer is " << power(base,exp)<<std::endl;
} 
