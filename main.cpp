#include <iostream>
using namespace std;

void m_sort(int arr[], int len)
{
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {7,11,2,6,33,21};
	m_sort(arr, 6);
	for(int i = 0; i < 6; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}
