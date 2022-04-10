int findUnique(int *arr, int size)
{
    //Write your code here
    int j;
    for(int i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(i==j)
                continue;	//skipping when i and j is same
            if(arr[i] == arr[j])
                break;		//leaving j loop when we get a duplicate
        }
        if(j == size){
           return arr[i];	//if j reaches the end of the array then it means there is no duplicate for the i element in the array
        }
    
       }
}
