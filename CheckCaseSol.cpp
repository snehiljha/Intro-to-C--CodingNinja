#include <iostream>
using namespace std;

int main(){
	char a;
	cin >> a;

	if ( a <= 90 && a >= 65 )
	{
		cout << "1" << endl;
	}else if ( a >= 97 && a <=122 )
	{
		cout << "0" << endl;
	}else{
		cout << "-1" << endl;
	}

}
