#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 0;
	int Sum = 0;
	
	while( n != 0){	
		int a;
		a = (n%10);
		Sum = Sum*10 + a;
		n = n/10;
		i++;

	}
	cout<<Sum<<endl;
	
}