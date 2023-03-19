/*
Given an input string (STR), print all possible permutations of the input string.
Note:
The input string may contain the same characters, so there will also be the same permutations.
The order of permutations doesn’t matter.
Input Format:
The only input line contains a string (STR) of alphabets in lower case
Output Format:
Print each permutations in a new line
Constraint:
1<=length of STR<=8
Time Limit: 1sec
Sample Input 1:
cba
Sample Output 1:
abc
acb
bac
bca
cab
cba
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// void printPermutations(string input){

//     	/* Don't write main() function.
// 	 * Don't read input, it is passed as function argument.
// 	 * Print output as specified in the question
// 	*/
// }
void printPermutations(string input,string output=""){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(input=="")
    {
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++)
    {
        printPermutations(input.substr(1),output+input[0]);
        rotate(input.begin(),input.begin()+1,input.end());
    }
}
