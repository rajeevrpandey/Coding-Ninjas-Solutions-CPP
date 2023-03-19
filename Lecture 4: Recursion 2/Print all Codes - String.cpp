/*
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
Input format :
A numeric string S
Output Format :
All possible codes in different lines
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
*/

#include <string.h>
using namespace std;

// void printAllPossibleCodes(string input) {
//     /*
//     Given the input as a string, print all its possible combinations. You do not need to return anything.
//     */
// }
map<string,char> keyMap;

void printAllPossibleCodes(string input,string output="") {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    char ch='a';
    for(int i=1;i<=26;i++,ch++)
        keyMap[to_string(i)]=ch;
    
    if(input=="")
    {
        cout<<output<<endl;
        return;
    }
    
    printAllPossibleCodes(input.substr(1),output+keyMap[string(1,input[0])]);
    if(input.size()>1 && stoi(input.substr(0,2))<=26)
        printAllPossibleCodes(input.substr(2),output+keyMap[input.substr(0,2)]);
}
