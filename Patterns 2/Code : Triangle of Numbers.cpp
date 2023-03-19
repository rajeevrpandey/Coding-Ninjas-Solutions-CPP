/*
Print the following pattern for the given number of rows.
Pattern for N = 4

           1
         232
       34543
     4567654

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/
#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n-i;j++)
            cout << ' ';
        for(k = i; k<=2*i-1;k++){
            cout << k;
            
        }
            
        k=2*i-2;
        while(k>=i){
            cout << k;
            k--;
        }
        cout << endl;
    }
    
}
