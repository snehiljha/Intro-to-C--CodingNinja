#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;
	while( i <= n ){
		int j;
		cin >> j;
		

		int input[1000000];

		for (int i = 0; i < j; i++)
		{
			cin >> input[i];
		}

		if (( j % 2) == 0)
		{
			for (int i = 0; i < (j); i++)
			{
				if ((i%2) != 0)
				{
					continue;
					i++;
				}
				int temp      = input[i];
				input[i]      = input[i + 1];
				input[ i + 1] = temp;
			}
			for (int i = 0; i < j; i++)
			{
				cout << input[i] << endl;
				
			}
		}
		i++;

	}
}