#include <iostream>
using namespace std;

int BinarySearch(int input[],int n,int x){
	int Start = 0; int End = n - 1;
	while(Start <= End){
		int Mid;
		Mid = (Start + End)/2;

		if (input[Mid] > x)
		{
			End = Mid - 1;
		}else if (input[Mid] < x)
		{
			Start = Mid + 1;
		}else if (input[Mid] == x)
		{
			return Mid;
		}

	}
	return -1;






}

int main()
{
	int n;
	cin >> n;

	int input[1000000];

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

//	int x;
//	cin >> x;

	int j;
	cin >> j;

	int a = 1;

	while( a <= j ){
		int x;
		cin >> x;
		cout << BinarySearch(input, n, x) << endl;
		a++;		
	}


}