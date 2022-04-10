int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    if(size<=1)
        return 0;
    int i = 1;
    while(input[i]>input[i-1] && i<size)
        i++;
    if(i==size)
        return 0;
    return i;
    
}
