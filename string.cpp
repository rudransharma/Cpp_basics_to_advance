#include<iostream>
#include<string>
using std::string;
int main(){
	string greetings = "HELLO";
	std::cout << greetings[0] << std::endl;
	string complete_greeting = greetings + " buddy"; //concatenation
	complete_greeting += "!";
	std::cout<<complete_greeting<<std::endl;
	std::cout<< complete_greeting.length() << std::endl; //member function == function attached to the object
	char name[] = "Caleb"; //c string == array of character="Caleb\0"
}
