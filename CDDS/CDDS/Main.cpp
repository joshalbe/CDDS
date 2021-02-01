#include <iostream>
#include "ShopKeep.h"
#include "DynamicArray.h"

template <typename T>
T add(T lhs, T rhs)
{
	return lhs + rhs;
}

//Create a function that will sort an array of integers using bubble sort
//Print the array before and after it's sorted

void bubbleSort(int arr[], int length)
{
	for (int i = 0; i < length; i++) 
	{
		for (int j = length - 1; j > i; j--) 
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void print(int array[], int length) 
{
	//Iterate through the array
	for (int i = 0; i < length; i++) 
	{
		//Sending the indexed number to the console
		std::cout << array[i];

		if (i < length - 1) 
		{
			//Comma for clarity
			std::cout << ", ";
		}
	}
	//End the line
	std::cout << std::endl;
	system("pause");
}

int main() 
{
	//Create a new array
	int exampleArr[5] = { 4,2,5,1,3 };

	//Print array
	print(exampleArr, 5);

	//Sort array
	bubbleSort(exampleArr, 5);

	//Print sorted array
	print(exampleArr, 5);

	//auto sum = add<int, int>(3.5656f, 3.6454f);

	ShopKeep<int, 5> potionSellah = ShopKeep<int, 5>();
}