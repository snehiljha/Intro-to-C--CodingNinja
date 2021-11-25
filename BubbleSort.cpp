#include <iostream>
using namespace std;


void BubbleSort(int input[], int k ){

	for (int j = 0; j < (k - 1) ; j++)
	{
		for (int i = 0; i < k - 1 - j ; i++)
		{
			if (input[i] > input[ i + 1 ])
			{
				int temp = input[i];
				input[i] = input[i + 1];
				input[i + 1]= temp;
			}
		}
		
	}
}

int main()
{

	int n;
	cin >>n;

	for (int a = 0; a < n; a++ )
	{
		int k;
		cin >> k;

		int input[1000000];
		for (int i = 0; i < k; i++)
		{
			cin >> input[i];
		}
		BubbleSort(input,k);
		
		for( int i = 0;i<k;i++){
		    cout << input[i] ; 
		}
	}											
}