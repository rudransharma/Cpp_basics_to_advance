#include<iostream>
int main(){
	int factorial=5;
	int i= factorial -1;
	while(i>1){
		factorial = factorial * i;

		i--;
	}
	std::cout<< factorial <<std::endl;


}
