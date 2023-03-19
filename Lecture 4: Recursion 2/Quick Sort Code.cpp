/*
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.


Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 10^3
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
1 5 2 7 3
Sample Output 2 :
1 2 3 5 7 
*/

/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/
int partition(int a[], int si, int ei){
    int count = 0;
    int x = a[si];
    for(int i = si+1; i<=ei ; i++){
        if(a[i]<=x)
            count++;
    }
    int temp;
    temp = a[si];			// putting x at its correct position
    a[si] = a[si+count];
    a[si+count] = temp;
    int i = si;
    int j = ei;
    while(i<si+count || j>si+count){
        if(a[i]<=x)
            i++;
        else if(a[j]>x)
            j--;
        else{
            temp = a[i];		// swapping a[i] and a[j]
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    return si+count;
}

void quickSort1(int a[], int start, int end)
{
    // your code goes here 
    if(start>=end)
        return;
    int c = partition(a, start, end);
    quickSort1(a, start, c-1);
    quickSort1(a, c+1, end);
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    quickSort1(input, 0, size - 1);

}
