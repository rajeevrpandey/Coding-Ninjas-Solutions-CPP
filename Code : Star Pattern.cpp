#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/int n,k=0;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n-i;j++)
            cout << ' ';
        for(k = 1; k<=2*i-1;k++)
            cout << '*';
        
        cout << endl;
    }
  
}
