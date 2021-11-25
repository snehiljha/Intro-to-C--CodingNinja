#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	int i = 2;
	int j = 1;
	while(i <= n){
		sum = sum + 2*j;
		i = i + 2;
		j = j + 1;
	}
	cout << sum << endl;
}