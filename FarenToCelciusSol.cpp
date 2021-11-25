#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a ;
	cin >> b ;
	cin >> c ;

	int i;
	while(a <= b){
		i = ((a-32)*5)/9;
		cout << a << '\t' << i << endl;
		a = a + c;
	}
	
}