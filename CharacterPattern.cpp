#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;
	char j = 65;

	while( i <= n){

		int k = 1;
		j = 64 + i;
		while ( k <= i){
			cout << j;
			k++;
			j++;
		}
		cout << endl;
		i++;
		

	}
	
}