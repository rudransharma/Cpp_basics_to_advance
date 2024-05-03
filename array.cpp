#include<iostream>
int main(){
	int guesses[]= {10,13,54,42,12,12,13};
	int size = sizeof(guesses)/sizeof(guesses[0]);
        std::cout<<guesses[3]<<std::endl;
	guesses[3]=300;
	std::cout<<guesses[3] <<std::endl;

 for (int i=0; i<size ; i++){
              std::cout<< guesses[i] << std::endl;
      } 
   
	
      int guess[20];
      guess[0]=10;
      std::cin>>guess[0];
      std::cout<<guess[0] <<std::endl;
   return 0;
}
