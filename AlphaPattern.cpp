#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;
	char j = 65;
	int k;

	while( i <= n){
		
		k = 1;
		while( k <= i){
			cout << j;
			k++;
		}

		cout << endl;
		i++;
		j++;


	}

}