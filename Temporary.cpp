#include <iostream>

using namespace std;

int main()
{	
 //   int n;
   // cin >> n;
 /*   
	int a = 2;
	int b = 5;
	pow(a,b);
	/*
	int m,n;
	cin >> m>>n;
	*/
	/*
	char j;
	j = 65+n;
	cout <<j;
	int j = (n/2) + 1;
	cout << j;
    for (int i = m; m <= n; m++)
    {
    	cout<<m<<endl;
    }
    */
    /*
    long a;
    cin>>a;
    cout<<a;
    */
    /*

    int n;
    cin >>n;

    int i = 0;
    while(n != 0){
    	n = n / 10;
    	i++;

    }

    int j = 1;
    while(j<i){
    	cout<<j<<endl;
    	j++;
	
    }
    */

/*
    string a;
    cin >> a;
    int len = a.size();
    cout << len<<endl;
*/
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





#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int input[1000000];
    for(int i =0;i<n;i++){
        cin >> input[i];
    }
    
    int i = 0;
    while(i < n-1){
        
        int j = 0;
        
        while(j < n-1){
            if(input[i] > input[i+1+j]){
                j++;
            }else{
                break;
            }
            
            if((i+1+j)==n-1){
                cout<<input[i]<<" ";
                
            }
        }
        i++;
        
    }
    cout<<input[n-1]<<endl;
}

}



#include <iostream>
using namespace std;

int main(){
    
    int n;
    int m;
    cin >> n >> m;
    
    
    
    int a[100][100];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    
    for(int i=0;i<n;i++){
    for(int k = 0;k<n-i;k++){
    for(int j = 0; j < m; j++){
        cout << a[i][j] << " ";
    }
    cout << endl;
    }
    }
}



    for(int i = 0; i < 1 ; i++){
        for( int j = 0; j < col ; j++){
            cout << input[i][j] << " ";
        }
        
    }
    
    for(int j = col - 1; j < col ; j++){
        for(int i = 1; i < row; i++){
            cout << input[i][j] << " ";
        }
    }
    
    for(int i = row - 1; i < row; i++){
        for( int j = col - 2; j >= 0; j--){
            cout << input[i][j] << " ";
        }
    }
    
    for(int j = 0; j < 1; j++ ){
        for(int i = row - 2; i > 0; i--){
            cout << input[i][j] << " ";
        }
    }




    #include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int input[100000];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j<n){
            if(input[i]>=input[j]){
                j++;
                continue;
            }else{
                break;
            }
        }
        if (j==n){
            cout<<input[i]<<" ";
        }
    }
    cout<<input[n-1];
    */
    


















}