#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
        	if(j<=n-i+1)
                cout << j;
            else
                cout << '*';
    	}
        for(int j = n;j>=1;j--){
        	if(j<=n-i+1)
                cout << j;
            else
                cout << '*';
    	}
        cout << endl;
    }

}
