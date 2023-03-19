/*
Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
true or false
Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false
*/

#include<cstring>

bool isSubSequence(char *str1, char *str2, int n, int m){ 
    
    // the entire m is present in the string
    if (m == 0) 
        return true; 
    
    // the string is completed
    if (n == 0) 
        return false; 
    
    
    if (str1[n - 1] == str2[m - 1]) 
        return isSubSequence(str1, str2, n - 1, m - 1); 
  
    return isSubSequence(str1, str2, n - 1, m); 
} 

bool checksequenece(char large[] , char*small) {
	 int n = strlen(large);
    int m = strlen(small);
    bool ans = isSubSequence(large, small, n, m);
    return ans;
}
