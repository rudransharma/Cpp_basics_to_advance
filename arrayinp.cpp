#include<iostream>
int main(){
	int size;
	std::cout<<"Enter the size of the array";
	std::cin>>size;
	int ele[size];
	for(int i=0;i<size;i++){
		std::cout<<"Enter the " << i << " element";
		std::cin>>ele[i];
	}
	for(int i=0;i<size;i++){
		std::cout<<ele[i]<< "\t";
	}}
