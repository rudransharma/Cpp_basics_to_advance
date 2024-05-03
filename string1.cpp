#include<iostream>
#include<string>
using std::string;
int main(){
	string greet = "hello";
	std::cout<< greet.size()<<std::endl;//same as obj.length()
       greet += " there";

       greet.append(" caleb!");

       greet.insert(5, "      ");
       std::cout<< greet <<std::endl;

      string ques = "What the Hell ";
      ques.replace(ques.find("Hell"),4,"Heaven");
      std::cout<<ques<<std::endl;

      string compare = "What is up ?";
      if(compare.compare("What is up ?") == 0 )
	      std::cout<<"equals"<<std::endl;

}



