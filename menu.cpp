#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
void print_array(int array[],int count){
	for(int i=0;i< count;i++){
		std::cout<<array[i]<<"\t";
	}
	std::cout<<"\n";}
void play_game(){
	int guesses[250];
	int guess_count = 0;
	int random = rand() % 251;
	std::cout << random <<std::endl;
	std::cout<<"Guess a number:";
	while(true){
		int guess;
		std::cin>> guess;
		guesses[guess_count++]=guess;
		if(guess==random){
			std::cout<< "you win\n";
			break;
		}
		else if(guess<random){
			std::cout<<"too low\n";
		}
		else{
			std::cout<<"too high\n";
		}
		print_array(guesses,guess_count);
}}
int main(){
	int choice;
	srand(time(NULL));
	do{

	std::cout << "0. Quit" << std::endl << "1.Play Game\n";
	std::cin>>choice;
	
	switch(choice){
		case 0:
			std::cout<< " Thanks for nothing\n";
			break ;
		case 1:
			play_game();
                        break;
		}
	}
	while(choice != 0);
}
