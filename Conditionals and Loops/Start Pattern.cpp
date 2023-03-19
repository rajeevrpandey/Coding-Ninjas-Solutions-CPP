/*
Print the following pattern
Pattern for N = 4

    *
   *** 
  *****
 *******


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/int n;
	//cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
	int val = 1;
	while (i <= n) {
		int k = 1;
		while (k <= n - i) {
			cout << " ";
			k = k + 1;
		}

		int j = 1;
		while (j <= 2*i-1) {
			cout << '*';
			j = j + 1;
			val = val + 1;
		}
		cout << endl;
		i = i + 1;
	}
  
}

