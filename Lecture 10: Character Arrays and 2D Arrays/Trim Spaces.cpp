/*
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.
Input Format :
 String S
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi
*/
void trimSpaces(char input[]) {
    // Write your code here
    int i = 0,j=0;
    while(input[i]){
        if(input[i] != ' '){
            // for(j=i;input[j];j++){
            //     input[j]=input[j+1];
            // }   							it didnt work in case of multiple consecutive spaces
            input[j]=input[i];
            j++;
        }
        i++;
      
    }
      input[j]='\0';
}
