#include<iostream>
#include<vector>
void print_vector(std::vector<int> &data)// if you use normal data instead of &data then the output would be same for all print_vector(num)

{
	data.push_back(10);
	for(int i=0;i<data.size();i++){
		std::cout<<data[i]<<"\t";
	}
	std::cout<<"\n";
}
int main(){
	std::vector<int> num ={1,2,3};
	print_vector(num);
	print_vector(num);
	print_vector(num);
	print_vector(num);
	print_vector(num);
}
