/*
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print them in different lines.
Input format :
Line 1 : Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1
*/

// void printSubsetSumToK(int input[], int size, int k) {
//     // Write your code here
// }
void printSubsetSumToK(int input[], int size, int k,string output="") {
    // Write your code here
    if(size==0)
    {
        if(k==0)
        {
            cout<<output<<endl;
            return ;
        }
        return;
    }
    printSubsetSumToK(input+1,size-1,k,output);
    printSubsetSumToK(input+1,size-1,k-input[0],output+to_string(input[0])+" ");
}
