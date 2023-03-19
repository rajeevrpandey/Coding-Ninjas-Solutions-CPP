/*
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/
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
