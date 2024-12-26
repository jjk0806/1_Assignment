#include <iostream>

void Swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void BubbleSort(int* num, const int& length, const int& input)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (input == 1)
			{
				if (num[j] > num[j + 1])
					Swap(num[j], num[j + 1]);
			}
			else if (input == 2)
			{
				if (num[j] < num[j + 1])
					Swap(num[j], num[j + 1]);
			}
			else
				return;
		}
	}
}

void SelectionSort(int* num, const int& length, const int& input)
{
	for (int i = 0; i < length - 1; i++)
	{
		int temp = i;

		for (int k = i + 1; k < length; k++)
		{
			if (input == 1)
			{
				if (num[temp] > num[k])
					temp = k;
			}
			else if (input == 2)
			{
				if (num[temp] < num[k])
					temp = k;
			}
			else
				return;
		}
		Swap(num[i], num[temp]);
	}
}

int main()
{
	int array[5]{ 4,3,5,2,1 };

	SelectionSort(array, 5, 1);
	//BubbleSortSarray, 5, 1);

	for (auto& i : array)
		std::cout << i;

	return 0;
}