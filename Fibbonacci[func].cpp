#include <iostream>
using namespace std;

bool Fib(int a){
	int i = 0;
	int j = 1;
	int k = 1;
	int l;
	while( k <= j ){
		l = i + j;
		i = j;
		j = l;
		
		if ( l == a)
		{
			cout << "true"<<endl;
			break;
		}else{
			k++
		}
	}
}

int main()
{
	int n;
	cin >> n;

	int Ans = Fib(n);
	cout << Ans << endl;
}

/*

    int n;
    cin >> n;

    int i = 0;
    int j = 1;
    int k = 1;
    int l;
    while( k <= 100000000 ){
        //Doubt - ( k <= j)not working?
        l = i + j;
        i = j;
        j = l;
        
        if ( i == n)
        {
            cout << "true"<<endl;
            break;
        }else if ( i > n)
        {
            cout << "false" <<endl;
            break;
        }else{
            k++;
        }
        //k++;    
    }
//    cout << "false"<<endl;


*/
