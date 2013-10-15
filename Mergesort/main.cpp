#include <iostream>
using namespace std; 

const int array_size = 7; 

void mergesort(int *a, int start, int end); 


int main()
{
	int arr[array_size] = {7, 3, 10, 12, 4, 6, 9};

	cout << "Welcome to Mergesort!" << endl; 

	int i = 0; 

	cout << "Initial array: "; 
	while(i < array_size)
	{
		cout << arr[i] << " "; 
		i++; 
	}
	cout << "\nPress any key to exit..." << endl; 
	char c = getchar(); 
}