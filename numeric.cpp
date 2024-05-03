#include<iostream>
#include<cmath>
using std::cout;
using std::endl;
int main(){
    cout<< sqrt(25)<<endl;
    cout<< sqrt(-25)<<endl; // not a number
    cout<<pow(9,999)<<endl; // inf
    cout<<pow(-9,999)<<endl; //neg inf
    cout<<remainder(10,3)<< endl;  // it gives floating point unlike % which gives only int
    cout<< fmax(10,20)<<endl ;// gives the highest value
    cout<< fmin(10,20)<<endl ;
}
			    
