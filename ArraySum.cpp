#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int input[1000000];//What should i put here?

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];

	}

	int Sum = input[0];
	for (int i = 1; i < n; i++)
	{
		Sum = Sum + input[i];
	}
	cout << Sum << endl;
}