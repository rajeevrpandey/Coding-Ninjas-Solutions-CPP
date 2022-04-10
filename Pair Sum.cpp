#include<climits>
int pairSum(int *input, int size, int x)
{
	//Write your code here
    int pairs = 0;
    int j;
    for(int i=0; i<size; i++){
        for(j=i+1; j<size; j++){
          	if(input[i] + input[j] == x){
                pairs++;
            }
        }
    }
    return pairs;
}
