#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while(i <= n){
		int k = 1;
		while(k<=n+1-i){
			cout<< n+1-i;
			k++;
			
		}
		cout<<endl;
		i++;

	}
}