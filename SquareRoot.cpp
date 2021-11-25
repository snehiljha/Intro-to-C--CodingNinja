#include <iostream>

using namespace std;
/*
int main()
{
	int n;
	cin >> n;

	for (int i = 1; (i*i) <= n; i++)
	{
		if ((i*i) >= n)
		{
			cout<<i<<endl;
		}
	}
}
*/

/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double s;

	s = sqrt(n);
	
	cout<<s<<endl;
}
*/

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while((i * i)<=n || (i+1)*(i+1)<= n){

		
		i++;



	}
	cout<<i-1<<endl;
}