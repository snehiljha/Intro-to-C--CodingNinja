#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 0;
	int Sum = 0;
	while(n!=0){
		int a;
		a = n % 10;

		int b = 1;
		int c = 1;
		while(c <= i){
			b = b*2;
			c++;

		}

		if (a==0)
		{
			Sum = Sum;
		}else if (a==1)
		{
			Sum = Sum + b;
		}



		n = n/10;
		i++;

	}
	cout<<Sum<<endl;
}