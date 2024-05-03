//PASS BY REFERENCE
#include<iostream>
void swap(int &a , int &b)
{
	int temp = a;
	a=b;
	b =temp;
        std::cout<<"a:" << a << "   " << "b:" << b <<std::endl;
}
int main(){
int a,b;
std::cout<< "Enter two number: ";
std::cin >> a >> b; 
	swap(a,b);
	
	std::cout<< a << "   "  << b;
	return 0;
}

