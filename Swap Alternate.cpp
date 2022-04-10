void swapAlternate(int *arr, int size)
{
    //Write your code here
    int temp;
    for(int i=0; i<size-1; i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
}
