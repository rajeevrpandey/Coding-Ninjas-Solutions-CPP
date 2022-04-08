#include<climits>
void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here 
    int i=0,j=0,k=0;
    // arr1[size1]=INT_MAX;
    // arr2[size2]=INT_MAX;
    while(i<size1&&j<size2){
        
        if(arr1[i]<arr2[j]){
            ans[k]= arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]= arr2[j];
            j++;
            k++;
        }
    }
    if(i==size1){
        while(j<size2){
            ans[k]= arr2[j];
            j++;
            k++;
        }
    }
    if(j==size2){
        while(i<size1){
            ans[k]= arr1[i];
            i++;
            k++;
        }
    }
}
