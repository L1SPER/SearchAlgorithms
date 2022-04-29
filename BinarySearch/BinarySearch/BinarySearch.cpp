#include<iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int number)
{
	if (right >= 1)
	{
		int mid = left+(right-left) / 2;
		if (arr[mid] == number)
			return mid;
		if (arr[mid] > number)
			return BinarySearch(arr, left, mid-1, number);
		
		return BinarySearch(arr, left,mid+1 , number);
	}
	return -1;
}

int main()
{
	int arr[] = {  1,2,3,4,5,6,7,8,9 };
	int number = 2;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result =BinarySearch(arr, 0, size-1, number);
	(result == -1) ? cout << "Number isnt present in array" : cout << "Number is present at index " << result;

	return 0;
}