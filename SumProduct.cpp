#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int b;
	cin >> b;

	if ( b == 1)
	{
		int i = 1;
		int Sum = 0;
		while( i <= a){
			Sum = Sum + i;
			i++;

		}
		cout << Sum <<endl;
	}else if ( b == 2)
	{
		int j = 1;
		int Product = 1;
		while( j <= a){
			Product = (Product)*j;
			j++;


		}
		cout << Product << endl;
	}else{
		cout<< -1 << endl;
	}

}