void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
void rotate(int *input, int d, int n)
{
    //Write your code here
    // int temp;
    // for(int j=1;j<=d;j++){
    //     temp = input[0];
    //     for(int i = 0;i<n-1;i++)
    //         input[i] = input[i+1];
    //     input[n-1] = temp;
    // }
    
    
    
//     int temp[1000000];
//     for(int j=0;j<=d-1;j++){
//         temp[j] = input[j];
//     }
//     for(int i = 0;i<n-1;i++)
//         input[i] = input[i+d];
//     for(int j=n-d;j<=n-1;j++){
//         input[j] = temp[j-n+d];
//     }
    
    
    
    rvereseArray(input,0,n-1);		// reversing the complete array
    rvereseArray(input,0,n-d-1);	// reversing first n-d elements
    rvereseArray(input,n-d,n-1);	// reversing last d elements
    
    
}
