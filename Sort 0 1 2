void sort012(int *arr, int n)
{
    //Write your code here
    int i, temp, next0 = 0, next2 = n-1;
    for(i=0;i<=next2;){
        
        if(arr[i] == 2){
            temp = arr[i];
            arr[i] = arr[next2];
            arr[next2] = temp;
            next2--;
        }
        
        else if(arr[i] == 0){
            temp = arr[i];
            arr[i] = arr[next0];
            arr[next0] = temp;
            next0++;
            i++;
        }
        
        else{		// arr[i] == 1
            i++;
        }
        
    }
}
