/*
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/

bool checkPalindrome(char input[]) {
    int i = 0;
    while (input[i])
        i++;
    if(i<=1)
        return true;
    else if(i==2){
        if(input[0]==input[1])
            return true;
        else
            return false;
    }
    else{
        if(input[0]==input[i-1]){
            input[i-1] = '\0';
            return true && checkPalindrome(input+1);
        }
        else
            return false;
    }
}
