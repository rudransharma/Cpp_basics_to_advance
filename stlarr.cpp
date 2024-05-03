#include<iostream>
#include<array>
int main(){
	std::array<int,20> data = { 1,2,3};
	std::cout<< "The size of array is " << data.size() ;
	for ( int i =0 ; i<data.size() ; i++){
		std::cout<< data.at(i) << "\n";
	}
}
