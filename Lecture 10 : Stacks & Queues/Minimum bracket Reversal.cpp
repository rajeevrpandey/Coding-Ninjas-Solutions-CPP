/*
Minimum bracket Reversal
For a given expression in the form of a string, find the minimum number of brackets that can be reversed in order to make the expression balanced. 
The expression will only contain curly brackets. If the expression can't be balanced, return -1.

Example:
Expression: {{{{
If we reverse the second and the fourth opening brackets, the whole expression will get balanced. Since we have to reverse two brackets to make the expression balanced, the expected output will be 2.

Expression: {{{
In this example, even if we reverse the last opening bracket, we would be left with the first opening bracket and hence will not be able to make the expression balanced and the output will be -1.

Input Format :
The first and the only line of input contains a string expression, without any spaces in between.

Output Format :
The only line of output will print the number of reversals required to balance the whole expression. Prints -1, otherwise.

Note: You don't have to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the expression.

Time Limit: 1sec

Sample Input 1:
{{{

Sample Output 1:
-1


Sample Input 2:
{{{{}}

Sample Output 2:
1
*/

#include<stack>
#include<string>

int countBracketReversals(string input){
    // Write your code here
    stack<char> st;
    int l = input.size();
    int count;
    if(!(l & 1)) {
        for(int i = 0; i < l; i++) {
            if(input[i] == '{') {
                //push onto stack
                st.push(input[i]);
                
            } else if(input[i] == '}' and !st.empty()) {
                if(st.top() == '{') {
                    st.pop();
                } else {
                    st.push(input[i]);
                }
            } else {
                st.push(input[i]); // when the first character is '}'
            }
        }
        count = 0;
        
        while(!st.empty()) {
            char c1 = st.top();
            st.pop();
            
            char c2 = st.top();
            st.pop();
            
            if(c1 == c2) {
                count++; // if the characters are same we need to invert one of them
            } else {    //	if they are different we need to invert both
                count += 2;
            }
        }
        
        return count;
    } else { // if the length is odd then we cannot balance them
        
        return -1;
    }
}
