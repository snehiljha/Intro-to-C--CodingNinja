#include <iostream>
using namespace std;

int Faren_Cel(int a){
	int b;
	b = (5*(a-32))/9;
	return b;
}

int main()
{

	int x,y,z;
	cin >> x >> y >> z ;

	for (x; x <= y; x = x + z)
	{
		int ans = Faren_Cel(x);
		cout << ans << endl;
	}
}