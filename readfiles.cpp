#include<iostream>
#include<fstream>
#include<vector>
#include<string>
int main(){
	std::ifstream file("NEW.txt");
	std::vector<std::string> names;
	std::string input;//This line declares a string variable named input that will be used to temporarily store each word read from the file.
	while(file>>input){
		names.push_back(input);//This while loop reads words from the file one by one, storing each word in the input string variable. The file>>input operation reads a word from the file and stores it in input. As long as there are words remaining in the file, the loop continues, and each word is added to the names vector using the push_back() functioni
	}

	
	for( std::string name : names){
		std::cout<< name <<std::endl;
	}
	return 0;
}
