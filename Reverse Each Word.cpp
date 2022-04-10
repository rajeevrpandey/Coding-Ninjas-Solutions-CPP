#include <bits/stdc++.h>
void reverseEachWord(char input[]) {
    int len = 0;
    while(input[len] != '\0'){ 
        len++;
    }
    int start, end, i, j=0;
    for(int i=0;i<len;i++){
        start = i;
        while(input[j]!='\0'&&input[j]!=' ')
            j++;
        end = j-1;
        while(start<end){
            //swapping the characters at start and end
            char temp = input[start];
            input[start] = input[end];
            input[end] = temp;
            start++;
            end--; 
        }
        if(j >= len)
            break;
        i=j;
        j++;
    }
     
    
}
