#include <iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;

	int i = 1;
	while( i <= n){
		int b;
		cin >> b;
		int a;
		int input[1000000];
		for (a = 0; a < b ; a++ )
		{
			cin >> input[a];

		}
		int c;
		cin >> c;

		for (int a = 0; a < b; a++)
		{
			if (input[a] == c)
			{
				cout << a << endl;
				break;
			}else if ( a == (b-1))
			{
				cout << -1 << endl;
			}
		}
		i++;
		//cout << -1 << endl;


	}



}