#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int i = 1;

	while( i<= n){

		int j=1;
		while( j<= n-i){
			cout<<" ";
			j++;

		}

		int k=i;
		int l=1;
		while(l<=i){
			cout << k;
			k++;
			l++;

		}

		int a = i-1;
		int b = (i*2)-2;
		int c = 1;
		while(c<=a){
			cout <<b;
			b--;
			c++;

		}
		
		cout << endl;
		i++;

	}
}