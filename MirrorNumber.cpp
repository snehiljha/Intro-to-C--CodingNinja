#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while( i <= n){

		int j = i;
		while(j<=(n-1)){
			cout<<" ";
			j++;
		}
		int k = 1;
		while( k <= i){
			cout << k;
			k++;

		}
		cout << endl;
		i++;

	}
}