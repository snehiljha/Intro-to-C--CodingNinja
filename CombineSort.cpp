#include <iostream>
using namespace std;


void CombineSort(int input1[] , int input2[] , int j , int k , ){

	for (int i = 0,int j = 0,int k = 0; i < (j + k); i++)
	{	

		if (input1[i] <= input2[i])
		{
			input1[i + j] = input3[i];
			i + j = i + j + 1;

		}else if (input1[i] >= input2[i])
		{
			input2[i + j] = input3[i];
			i + j = i + j + 1;
		}
	
	}









}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;

		int input1[1000000];
		int input2[1000000];
		int input3[1000000];

		for (int a = 0; a < j; a++)
		{
			cin >> input1[a];
		}

		int k;
		cin >> k;

		for (int b = 0; b < k; b++)
		{
			cin >> input2[b];
		}

		CombineSort(input1 , input2 , input3 , j , k)

		for (int c = 0; c < (j + k); c++)
		{
			cout << input3[c];
		}
	}
}