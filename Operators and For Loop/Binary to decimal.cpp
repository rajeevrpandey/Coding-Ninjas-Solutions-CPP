/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,dig,rev=0,pv=1;
    cin >> x;
	while(x>0){
        dig = x%10;
        rev = rev + dig*pv;
        x = x/10;
        pv*=2;
    }
    cout << rev;
}
