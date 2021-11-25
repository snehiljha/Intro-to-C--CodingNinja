#include <iostream>
using namespace std;


void InsertionSort(int input[] , k){
	for (int i = 0; i < k; i++)
	{
		int current = input[i];
		int j;
		for ( j = i - 1; j >= 0; j--)
		{
			if (current < input[j])
			{
				input[ j + 1] = input[j];
			}else{
				break;
			}
		}
		input[ j + 1] = current;
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
		InsertionSort(input,k);
		
		for( int i = 0; i < k; i++ ){
		    cout << input[i] ; 
		}
	}
}