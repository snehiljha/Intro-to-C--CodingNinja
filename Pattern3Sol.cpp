#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while( i <= n){

		int k = 1;
		while( k <= (n - i)){
			cout << " ";
			k = k + 1;
		}


		int j = i;
		int l = 1;
		while( l <= j){
			cout << "*";
			l = l + 1;
		}

		int a = (i - 1);
		int b = 1;
		while( b <= a){
			cout << "*";
			b = b + 1;

		}
		cout << endl;
		i = i + 1;
	}
}