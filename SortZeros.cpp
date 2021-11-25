#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;


	while( i <= n ){


		int a = 0;
	   	int b = 0;
		int j;
		cin >>j;
		

		int input[1000000];

		for (int i = 0; i < j; i++)
		{
			cin >> input[i];
		}

		for (int i = 0; i < j; ++i)
		{
			if ( input[i] == 0)
			{
				a++;
			}else{
				b++;
			}
		}
		for (int i = 0; i < a; i++)
		{
			cout << 0 ;
		}
		for (int i = 0; i < b; ++i)
		{
			cout << 1;
		}
		cout << endl;
		i++;

	}
}