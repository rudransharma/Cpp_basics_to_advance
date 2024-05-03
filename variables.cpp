#include<iostream>
int main(){
	int slices; //declaration
	slices = 5 + 1;    //initialization
	
	int children = slices;
	slices = 10000;
	std::cout << children ;
	return 0;
}
