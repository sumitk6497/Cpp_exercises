#include <iostream>
using namespace std;

template <typename X>
void bubbleSort(X arr[], int len)
{
    for(int i = 0; i < len -1 ; i++)
        for(int j = 0; j < len - i -1; j++)
	    if(arr[j] > arr[j+1])
	        swap(arr[j], arr[j+1]);
}

template <typename X>
void display(X arr[], int len)
{
	for(int i=0; i < len; i++)
		std::cout<<arr[i]<< "  ";
	printf("\n");

}

int main()
{

	int arr1[] = {21,5,17,8,64,99,2,10,6,30};
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
	float arr2[] = {2.1,5.7,1.7,6.8,6.4,9.99,2.2,1.42,6,3.0};
	int len2 = sizeof(arr1)/sizeof(arr2[0]);
	int i;

	std::cout<<"Original array 1 = ";
	display(arr1, len1);

	bubbleSort<int>(arr1, len1);

	std::cout<<"Sorted array 1 = ";
	display(arr1, len1);


	std::cout<<"Original array 2 = ";
	display(arr2, len2);

	bubbleSort<float>(arr2, len2);

	std::cout<<"Sorted array 2 = ";
	display(arr2, len2);

	return 0;
}
