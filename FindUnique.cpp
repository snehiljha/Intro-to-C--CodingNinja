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
		for (int i = 0; i < (j-1); i++)
		{
			for (int c = 0; c < j; c++)
			{
				if (input[i] == input[c])
				{
					break;
				}else if ( c == ( j - 1))
				{
					cout << input[i] << endl;
				}
			}

		}
		i++;
	}
}