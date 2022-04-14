#include<climits>


void merge(int a[] , int si ,int ei)
{
  int size = ei-si+1;
  int  mid=(si+ei)/2;
     
    int* out = new int[size];
    int i = si;
    int j = mid+1;
    int k = 0;
    while(i<=mid && j<=ei){
        if(a[i]<a[j]){
            out[k]=a[i];
                i++;
                k++;
        }
        else{
            out[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        out[k]=a[i];
        i++;
        k++;
    }
    
    while(j<=ei){
        out[k]=a[j];
        j++;
        k++;
    }
    
     int m=0;
    for(int i=si;i<=ei;i++){
        a[i]=out[m];
        m++;
    }
    
    delete[] out;

}

void mergeSort2(int a[] , int si, int ei)
{
    if(si>=ei){
        return;
    }

    int mid = (si+ei) /2;
    mergeSort2(a,si,mid);
    mergeSort2(a,mid+1,ei);
    merge(a,si,ei);

}
void mergeSort(int a[], int n){

    int si = 0;
    int ei= n-1;

    mergeSort2(a , si , ei);

}


