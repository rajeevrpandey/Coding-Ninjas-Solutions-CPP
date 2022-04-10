#include<climits>
void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    int j;
    for(int i=0; i<size1; i++){				// loop for input1 array
        for(j=0; j<size2; j++){				// loop for input2 array
            
            if(input1[i] == input2[j]){		// found an intersection
                cout << input1[i] << " ";	// printing the intersection
                input2[j] = INT_MIN;		// marking the intersecting element in input2 so that it doesn't get printed again
                break;						// leave the j loop because copy of i element of input1 is already found in input2
            }
        }
        
    
       }
}
