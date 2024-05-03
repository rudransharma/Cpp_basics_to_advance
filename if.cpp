#include<iostream>
int main(){
	std::cout<<"How old are you?";
	int age;
	std::cin>>age;
	if(age>13){
		std::cout<<"You're not old enough\n";
		//return -1; could end the program will not print Always
	}
	else if(age<19){
		std::cout<<"You're almost 19\n";
	}
	else{
		std::cout<< "False\n";
	}
	std::cout<<"Always";
	return 0;
}
