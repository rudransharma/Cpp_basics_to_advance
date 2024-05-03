#include<iostream>
#include<vector>
int main(){
	std::vector<std::vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
        for(int i = 0 ; i<3 ; i++ ){
		for(int j=0 ; j<3 ; j++){
			std::cout<< matrix[i][j] << "\t" ;
		}
		std::cout << "\n" ;
	}
	return 0;
}
/*#include <iostream>
#include <vector>

int main() {
    // Create a nested vector (vector of vectors)
    std::vector<std::vector<int>> nestedVector = {
        {1, 2, 3},    // Inner vector 1
        {4, 5},       // Inner vector 2
        {6, 7, 8, 9}  // Inner vector 3
    };

    // Access elements of the nested vector
    std::cout << "Element at row 0, col 1: " << nestedVector[0][1] << std::endl; // Output: 2
    std::cout << "Element at row 2, col 3: " << nestedVector[2][3] << std::endl; // Output: 9

    // Modify elements of the nested vector
    nestedVector[1][0] = 10;
    std::cout << "Modified element at row 1, col 0: " << nestedVector[1][0] << std::endl; // Output: 10

    // Add a new inner vector
    std::vector<int> newInnerVector = {10, 11, 12};
    nestedVector.push_back(newInnerVector);

    // Iterate over the nested vector
    for (const auto& innerVector : nestedVector) {
        for (int element : innerVector) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
    }
    */
