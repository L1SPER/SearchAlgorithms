#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
			return i;
	}

	return -1;
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
	int number=0; //number is searched 
	int size = sizeof(arr)/sizeof(arr[0]); //size of 
	int result = LinearSearch(arr, size, number);
	(result == -1) ? cout << "Number isnt present in array" : cout << "Number is present at index: " << result;
	return 0;
}
