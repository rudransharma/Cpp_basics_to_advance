#include<iostream>
#include<string>

 int main(){
	 std::string password = "hellotaco";
	 std::string guess;
	 do
	 {
		 std::cout << "guess the password:";
		 std::cin >>guess;
	 }
	 while(guess != password);
 }
