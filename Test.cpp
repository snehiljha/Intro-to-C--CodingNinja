#include <iostream>
using namespace std;

int main()
{
//Qus 2
/*	
	int n;
	cin >> n;

	int i = 1;
	while( i <= n){
		int j = 1;

		while( j <= n + (1-i)){
			cout << j;
			j++;

		}
		int b = 1;

		while( b <= (2*(i-1))){
			cout << "*";
			b++;

		}
		//cout << endl;
		//i++;

		int c = 1;

		while( c <= n +(1-i)){
			cout << n+2 - i -c;
			c++;

		}
		cout << endl;
		i++;
		//cout << endl;
		//i++;
/*
		int d = 1;
		while( d <= i-1 ){
			cout << i - d ;
			d++;	
		}
		cout << endl;
		i++;
		
	}
*/

//Qus 1
/*	
	int n;
	cin >> n;

	int i = 1;
	while( i <= n){
		int j = 1;

		while( j <= n-i){
			cout << " ";
			j++;

		}

		int k = 0;

		while(k < i){
			cout<< (i - k);
			k++;

		}
		//cout << endl;
		//i++;
		int a = 2;
		while(a <= i ){
			cout << a;
			a++;

		}
		cout << endl;
		i++;

	}

*/
	/*


	int n;
	cin >> n;

	int i = 1;
	int j;
	int Grt;

	while(i <= n){
		cin >> j;


		//Grt = -1000000;

		if (j > Grt)
		{
			Grt = j;
		}
		Grt = j;




		i++;
	}
	cout << Grt <<endl;
*/

	

//	int n;
//	cin>>n;
	/*
	int a,b;
	cin>>a>>b;
	int largest;
	int second_largest;
	if (a>b){
		largest=a;
		second_largest=b;
	}else if (a==b){
		second_largest = INT_MIN;
		largest=a;
	}else{
		largest=b;
		second_largest=a;
	}
	*/
	/*

	if (n==0 || n==1){
		second_largest= INT_MIN;
		cout<<second_largest;
	}else{
	    int i=3;
		while (i<=n){
			int c;
			cin>>c;
			if (c>largest && c>second_largest){
				second_largest = largest;
				largest = c;
			}else if (largest>c && c>second_largest){
				second_largest=c;
			}else if (largest>c && second_largest>c){
				i++;
				continue;
			}else{
				second_largest = INT_MIN;
			}
			i++;
		}
		cout<<second_largest;
	}

*/

}


