/*
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5

  *
 ***
*****
 ***
  *
  
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/
#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */int n,k,i,j;
    cin >> n;
    for(i = 1; i<=(n+1)/2;i++){
        for(j = 1; j<=((n+1)/2)-i;j++)
            cout << ' ';
        for(k = 1; k<=2*i-1;k++)
            cout << '*';
        cout << endl;
    }
    for(i = (n-1)/2; i>=1;i--){
        for(j = 1; j<=((n-1)/2)-i+1;j++)
            cout << ' ';
        for(k = 1; k<=2*i-1;k++)
            cout << '*';
        cout << endl;
    }
    
}
