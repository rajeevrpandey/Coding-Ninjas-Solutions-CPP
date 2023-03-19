/*
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
    1
   212
  32123
 4321234
543212345
*/
#include<iostream>
using namespace std;

int main(){

  // Write your code here  
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++)
            cout << ' ';
        for(int k = i;k>=1;k--)
            cout << k;
        for(int l = 1;l<=i-1;l++){
            if(i<2)
                continue;
            cout << l+1;
        }
        cout << endl;
    }

  
}
