#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a;
	int Ans = 0;
	int i = 0;


	while( n != 0){
		a = n % 2;

		int j = 10;
		int P = 1;
		while(j <= 10*i){
			P = 10 * P;
			j = j + 10; 

		}
		Ans = Ans + a*P;

		i++;		

		n = n/2;
	}
	cout << Ans << endl;


}
//REPLACE ALL int BY long long int.



/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a;
	int Ans = 0;
	int i = 0;


	while( n != 0){
		a = n % 2;
		Ans = Ans + a*pow(10,i);

		i++;		

		n = n/2;
	}
	cout << Ans  << endl;
}
*/