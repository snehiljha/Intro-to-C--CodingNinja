#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int SumEven = 0;
	int SumOdd  = 0;

	int j;

	while( n > 0){

		j = n % 10;

		if ((j % 2) == 0)
		{
			SumEven = SumEven + j;
		}else if ((j % 2) != 0)
		{
			SumOdd = SumOdd + j;
		}

		n = n/10;

		

	}
	cout << SumEven << " " << SumOdd << endl;
} 