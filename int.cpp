#include<iostream>
#include<climits>
using std::cout;
int main(){
	short a;
	int b;
	long c; 
	long long d;
	unsigned short aa;
        unsigned int bb;
	unsigned long cc;
	unsigned long long dd;

	cout<< sizeof(short)<<std::endl;
	cout<< sizeof(int)<<std::endl;
	cout<< sizeof(long)<<std::endl;
	cout<< sizeof(long long)<<std::endl;
        cout <<SHRT_MAX<<std::endl;
        cout <<INT_MAX<<std::endl;
        cout <<LLONG_MAX<<std::endl;
        cout <<LONG_MAX<<std::endl;
}
