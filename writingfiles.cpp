#include<iostream>
#include<fstream>
#include<vector>
int main(){
	std::ofstream file;
	file.open("NEW.txt");
	if(file.is_open()){
		std::cout<<"success NOOOB\n";}
        std::vector<std::string> names ;
	names.push_back("caleb");
	names.push_back("curry");
	names.push_back("coder");
	for( std::string name : names){
		file<<name<<std::endl;}
	file.close();
	return 0;
}
