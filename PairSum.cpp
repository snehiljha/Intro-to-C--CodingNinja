#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;
	int b = 0;
	while( i <= n ){
		int j;
		cin >> j;

		int input[1000000];

		for (int i = 0; i < j; i++)
		{
			cin >> input[i];
		}

		int x;
		cin >> x;

		for (int i = 0; i < j; i++)
		{
			for (int a = 0; a < j; a++)
			{
				
				if ( a == i)
				{
					break;
				}
				if (input[i] + input[a] == x)
				{
				    
					//cout << b;
					b++;
				}
			}
		}
		cout << b <<endl;
		i++;
	}
}