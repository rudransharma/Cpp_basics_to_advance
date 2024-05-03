#include<iostream>
void print_array(int array[],int size)
{
	for(int i=0;i < size ; i++){
		std::cout<<array[i]<<"\t";}
}
int main(){
	int guess[] = {12,13,14,15,16};
	int size= sizeof(guess)/sizeof(int);//20
	print_array(guess,5); //8
}
