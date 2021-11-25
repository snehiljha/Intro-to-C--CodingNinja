#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin >> x >> y;
	int k = 1;

	int r = 1;
	while( k <= y){
		r = r*x;
		
		k = k + 1;

	}
	cout << r << endl;



	
}