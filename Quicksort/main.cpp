#include <iostream>
using namespace std; 

const int array_size = 7; 

int partition(int *arr, int start, int end);
void swap(int *arr, int a, int b); 
void quicksort(int *arr, int start, int end); 

int main() 
{
	int arr[array_size] = {7, 3, 10, 12, 4, 6, 9};

	cout << "Welcome to Quicksort!" << endl; 

	int i = 0; 

	cout << "Initial array: "; 
	while(i < 7)
	{
		cout << arr[i] << " "; 
		i++; 
	}
	
	quicksort(arr, 0, array_size - 1); 

	i = 0; 
	cout << "\nSorted arary: "; 
	while(i < 7)
	{
		cout << arr[i] << " "; 
		i++; 
	}

	cout << "\nPress any key to exit..." << endl; 
	char ch = getchar(); 
	return 0; 
}


void quicksort(int *arr, int start, int end)
{
	if(start >= end)
		return; 

	int r = partition(arr, start, end); 


	quicksort(arr, start, r - 1);
	quicksort(arr, r+1 , end); 
}

int partition(int *arr, int start, int end)
{
	int pivot = arr[(start+end)/2]; 
	int i = start, j = end; 

	while(i < j)
	{
		while(arr[i] < pivot)
			i++; 

		while(arr[j] > pivot)
			j--; 

		if(arr[i] == arr[j])
			i++; 
		else if(i < j)
			swap(arr, i, j); 

	}

	return j; 
}

void swap(int *arr, int a, int b)
{
	int temp = arr[a]; 
	arr[a] = arr[b]; 
	arr[b] = temp; 
}
