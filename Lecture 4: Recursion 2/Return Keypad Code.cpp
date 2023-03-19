/*
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
//     if(num == 0 || num == 1){	//base case
//         output[0] = "";
// 		return 1;
//     }
//     int smallOutputSize = keypad(num/10, output);
    
// 	// for (int i = 0; i < smallOutputSize; i++) {
// 	// 	output[i + smallOutputSize] = input[0] + output[i];
// 	// }
// 	// return 2 * smallOutputSize;
//     int digit = num % 10;
//     if(digit == 2){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'a';
//             output[i + smallOutputSize] = output[i] + 'b';
//             output[i + 2*smallOutputSize] = output[i] + 'c';
//         }
//         return 3 * smallOutputSize;
//     }
//     else if(digit == 3){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'd';
//             output[i + smallOutputSize] = output[i] + 'e';
//             output[i + 2*smallOutputSize] = output[i] + 'f';
//         }
//         return 3 * smallOutputSize;
//     }
//     else if(digit == 4){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'g';
//             output[i + smallOutputSize] = output[i] + 'h';
//             output[i + 2*smallOutputSize] = output[i] + 'i';
//         }
//         return 3 * smallOutputSize;
//     }
//     else if(digit == 5){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'j';
//             output[i + smallOutputSize] = output[i] + 'k';
//             output[i + 2*smallOutputSize] = output[i] + 'l';
//         }
//         return 3 * smallOutputSize;
//     }
//     else if(digit == 6){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'm';
//             output[i + smallOutputSize] = output[i] + 'n';
//             output[i + 2*smallOutputSize] = output[i] + 'o';
//         }
//         return 3 * smallOutputSize;
//     }
//     else if(digit == 8){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 't';
//             output[i + smallOutputSize] = output[i] + 'u';
//             output[i + 2*smallOutputSize] = output[i] + 'v';
//         }
//         return 3 * smallOutputSize;
//     }
//     else if(digit == 7){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'p';
//             output[i + smallOutputSize] = output[i] + 'q';
//             output[i + 2*smallOutputSize] = output[i] + 'r';
//             output[i + 3*smallOutputSize] = output[i] + 's';
//         }
//         return 4 * smallOutputSize;
//     }
//     else if(digit == 9){
//         for (int i = 0; i < smallOutputSize; i++) {
//             output[i] = output[i] + 'w';
//             output[i + smallOutputSize] = output[i] + 'x';
//             output[i + 2*smallOutputSize] = output[i] + 'y';
//             output[i + 3*smallOutputSize] = output[i] + 'z';
//         }
//         return 4 * smallOutputSize;
//     }
    string input;
    if(num == 0){
        output[0] = "";
        return 1;
    }
    
        int n = num%10;
        num = num/10;
        int smalloutputsize = keypad(num, output);
        switch(n){
            case 2: input = "abc";
                break;
            case 3: input = "def";
                break;
            case 4: input = "ghi";
                break;
            case 5: input = "jkl";
                break;
            case 6: input = "mno";
                break;
            case 7: input = "pqrs";
                break;
            case 8: input = "tuv";
                break;
            case 9: input = "wxyz";
                break;
               
    }
    int ans_size=smalloutputsize*(input.size());
    string temp[ans_size];
    int k=0;
    for(int i=0; i<smalloutputsize; i++){
        for(int j=0; j<input.size(); j++){
            temp[k] = output[i]+input[j];
            k++;
        }
        
    }
    for(int i=0; i<ans_size; i++){
        output[i] = temp[i];
    }
    return input.size()*smalloutputsize;
    
}
