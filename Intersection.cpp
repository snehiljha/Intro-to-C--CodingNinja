#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while( i <= n){
		int j;
		cin >> j;

		int input1[1000000];

		for (int i = 0; i < j; i++)
		{
			cin >> input1[i];
		}

		int k;
		cin >> k;

		int input2[1000000];

		for (int i = 0; i < k; i++)
		{
			cin >> input2[i];
	
		}

		if ( j >= k)
		{
			for (int i = 0; i < j; i++)
			{
				for (int a = 0; i < k; a++)
				{
					if ( input1[i] == input2[a] )
					{
						cout << input1[i]<<endl;
					}
				}
			}
		}else if (j < k)
		{
			for (int i = 0; i < k; i++)
			{
				for (int b = 0; b < j; b++)
				{
					if ( input1[i] == input2[b] )
					{
						cout << input1[i]<<endl;
					}
				}
			}
		}
		i++;
	}

}