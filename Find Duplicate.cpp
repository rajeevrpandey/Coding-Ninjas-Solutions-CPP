int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int j;
    for(int i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(i==j)
                continue;		//skipping when i and j is same
            if(arr[i] == arr[j])
                return arr[i];	//when found the duplicate, return it
        }
        
       }
}
