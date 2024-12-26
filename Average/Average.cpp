#include <iostream>

using namespace std;

int Sum(const int* index, const int& length)
{
	int result = 0;

	for (int i = 0; i < length; i++)
	{
		result += index[i];
	}

	return result;
}

float Average(const int& sum, const int& length)
{
	return static_cast<float>(sum) / length;
}

int main()
{
	int* ptr_index = nullptr;
	int index_length = 0;
	int sum = 0;
	float average = 0;

	cout << "배열 길이 : ";
	cin >> index_length;

	ptr_index = new int[index_length];

	for (int i = 0; i < index_length; i++)
	{
		cout << i + 1 << "번 째 ";
		cin >> ptr_index[i];
	}

	sum = Sum(ptr_index, index_length);

	average = Average(sum, index_length);

	cout << "합계 " << sum << " 평균 " << average << endl;

	delete[] ptr_index;
	return 0;
}