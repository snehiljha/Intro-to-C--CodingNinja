#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>> n;

	int i = 0;
	int j = 1;
	int k = 1;
	int l;

	if (n==1)
	{
		cout<<1<<endl;
	}else if(n==2){
		cout<<1<<endl;
	}else{
		while(k<=n){

			l = i + j;
			i=j;
			j=l;
			k++;


		}
		cout<<i<<endl;
	}
	
}