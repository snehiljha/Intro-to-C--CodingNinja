#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;


	for (int i=2; i <= n; i++)
	{
		bool div=false;
		int j = 2;
		

		while(j<i){
			if ((i%j)==0)
			{
				div = true;
				break;
			}
			j++;
		}	
		if (div == false)
		{
			cout<<i<<endl;
		}
	}

}