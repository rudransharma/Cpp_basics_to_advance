#include<iostream>
int main(){
	double x= 10 + (4.0 / 3); //assignment operator
        std::cout<< x <<std::endl;
        

	double y;
	double z;
	y=10;
	y=z=100; //y=z , z=100 associativity right to left
	std::cout<< y << "\t" << z <<std::endl;
}
