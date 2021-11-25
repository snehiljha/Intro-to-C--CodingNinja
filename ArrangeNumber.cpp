#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while( i <= n ){

		int j;
		cin >> j;

		int input1[1000000];
		int input2[1000000];

		for (int a = 0; a <= j; a++)
		{
			input1[a] = 1 + 2*a;
		}
		for (int i = 0; i < (j/2)+1; i++)
		{
			cout << input1[i] << endl;
		}
		for (int i = 0; i < j; i++)
		{
		    if((j % 2) != 0){
		        input2[i] = 2 + 2*i -(j+1);
		        
		    }
		    if((j%2)==0){
		        input2[i] = 2+ 2*i - (j);
		        
		    }
			
		}
		for (int i = 0; i < (j/2); i++)
		{
			cout << input2[j - (i + 1)] << endl;
		}
		i++;
	}
	
}