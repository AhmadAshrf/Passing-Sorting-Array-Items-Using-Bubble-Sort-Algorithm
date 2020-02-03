#include <iostream>
using namespace std;
void sorting(int arr[], int s) {
	int t = 0;
	for (size_t i = 0; i < 5 - 1; i++)
	{
		for (size_t j = 0; j < 5 - 1; j++)
		{
			if (arr[j] > arr[j + 1]){
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t; // SWAPPING
			}
		}
	}
}
void print(int arr[], int s) {
	for (size_t i = 0; i < 5; i++)
	{
		cout << " " << arr[i] << " ";
	};
}
int main() { 
	// SET Array Size
	int elements[5];
	// Getting Items "Numbers" From User
	cout << "Enter The Array Items :" << endl;
	for (int i = 0; i < 5; i++){	
		cin >> elements[i];
		cout << endl;
	};
	sorting(elements, 5);
	print(elements, 5);
	system("pause");
	return 0;
};