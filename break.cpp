#include<iostream>
#include<string>
int main(){
	std::string sentence = "hello guys welcome";
	for (int i=0 ;i<sentence.size();i++){
		std::cout<<sentence[i]<<std::endl;
		if(sentence[i]=='o'){
			std::cout << "found o!";
                        break;}
	}
	std::cout<<"done\n";
}
