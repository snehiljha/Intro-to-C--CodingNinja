#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = 1;

	while( i <= (n/2)+1){

		int j = 1;
		while(j<=((n/2)-i+1)){
			cout<<" ";
			j++;


		}

		
		int l = 1;
		while(l<=i){
			cout<<"*";
			l++;

		}

		int a = i-1;
		int b = 1;
		while(b<=a){
			cout<<"*";
			b++;

		}

		cout<<endl;
		i++;

	}
	/*

	while(i<=n && i>(n/2)+1){
		int x= (n/2)+2;
		while(x<=i){
			cout<<" ";
			x++;

		}

		int y =n-i;
		while(y<=(n/2)){
			cout<< "*";
			y++;

		}
		cout<<endl;
		i++;

	}
	*/
	int z=1;
	int x=(n/2)+2;
	while(x<=n){
		
		int y=1;
		while(y<=z){
			cout<<" ";
			y++;

		}
		int w=z;
		while(w<=(n/2)){
			cout<<"*";
			w++;

		}

		int d=z;
		while(d<=(n/2)-1){
			cout<<"*";
			d++;

		}
		cout<<endl;
		z++;
		x++;



	}
}