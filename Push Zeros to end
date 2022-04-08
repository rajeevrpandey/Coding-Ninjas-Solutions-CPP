void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    // for(int i=size-1;i>=0;i--){
    //     if(input[i]==0){
    //         int j=i+1;
    //         while(input[j]!=0){
    //             input[j-1]=input[j];
    //             j++;
    //         }
    //         input[j-1]=0;
    //     }
    // }
    int lastNonZeroFoundAt = 0;
    // If the current element is not 0, then we need to
    // append it just in front of last non 0 element we found. 
    // lastNonZeroFoundAt points to the place just right of the subarray of already pushed non zero elements
    for (int i = 0; i < size; i++) {
        if (input[i] != 0) {
            input[lastNonZeroFoundAt] = input[i];
            lastNonZeroFoundAt++;
        }
    }
 	// After we have finished processing new elements,
 	// all the non-zero elements are already at beginning of array.
 	// We just need to fill remaining array with 0's.
    for (int i = lastNonZeroFoundAt; i < size; i++) {
        input[i] = 0;
    }
    
}
