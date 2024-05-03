#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
int main(){
    int age;
    cout<<"what's your age?";
    cin>> age;
    switch(age){
	    case 13:
		    cout<<"Your age is 13.\n";
		    break; // if you miss the break then all the case output will run
	    case 14:
		    cout<<"Your age is 14.\n";
		    break;
            default:
		    cout<<"Catch all.\n";
    }
    return 0;
}
