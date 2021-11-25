#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int i = 1;
	int j = 1;
	int k = 1;
	
	
	while( k <= x){
		
		j = (3*i) + 2;
		
		if( (j % 4) == 0){
			i++;
			continue;
		}
		cout << j << " ";
		i++;
		k++;
	}
}
