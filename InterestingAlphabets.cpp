#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;
	char j;
	j = 64 + n;
	

	while ( i <= n ){

		int k = 1;
		
		while( k <= i){
			cout << j;
			k++;
			j++;
			


		}
		j = 65 + n - i;
		
		cout << endl;
		i++;
		j--;
		
		
	}
	
}