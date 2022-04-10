#include<climits>
int findSecondLargest(int *input, int n)
{
    //Write your code here
    if(n<=1)
        return INT_MIN;
    // bool isSame = true;
    // for(int i=0;i<n-1;i++){
    //     if(input[i]!=input[i+1])
    //         isSame = false;
    // }
    // if(isSame)
    //     return INT_MIN;
    int first=INT_MIN,second=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(input[i]>first){
            second = first;
            first = input[i];
        }
        else if(input[i]==first)
            continue;
        else if(input[i]>second)
            second = input[i];
    }
    return second;
}
