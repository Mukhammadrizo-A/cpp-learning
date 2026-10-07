#include <iostream>

int main() { 
	short col, row; 
	
	std::cout << "Please, enter size (col) (row): "; 
	std::cin >> col >> row;
	
	short **nums = new short*[col]; 
	
	for (short i = 0; i < col; i++) { 
		nums[i] = new short[row]; 
	} 
	
	for (short q = 0; q < col; q++) { 
		for (short w = 0; w < row; w++) { 
			std::cout << "Enter element [" << q << "] [" << w << "]: "; 
			std::cin >> nums[q][w]; 
		} 
	} 
	
	for (short e = 0; e < col; e++) { 
		for (short r = 0; r < row; r++) { 
			if (nums[e][r] % 2 == 0) { 
				std::cout << "Element: " << nums[e][r] << std::endl; 
			} 
		} 
	} 
	
	for (short i = 0;i < col; i++) { 
		delete[] nums[i]; 
	} 
	
	delete[] nums; return 0; }