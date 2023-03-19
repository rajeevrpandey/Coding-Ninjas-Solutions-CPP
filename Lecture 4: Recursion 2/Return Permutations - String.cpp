/*
Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
Input Format :
String S
Output Format :
All permutations (in different lines)
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba
*/

#include <string>
using namespace std;

// int returnPermutations(string input, string output[]){
//    	/* Don't write main() function.
// 	 * Don't read input, it is passed as function argument.
// 	 * Print output as specified in the question
// 	*/
// }
int returnPermutations(string input, string output[])
{
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/

    if(input == "")
    {
        output[0] = "";
        return 1;
    }

    int smallOutput = returnPermutations(input.substr(1),output);
    string temp;
    for(int i=0;i<smallOutput;i++)
    {
        temp=output[i];
        for(int j=0;j<=temp.size();j++)
        {
            temp.insert(j,1,input[0]);
            output[j*smallOutput+i]=temp;
            temp.erase(j,1);
        }
    }
    return smallOutput*(output[0].size());
}
