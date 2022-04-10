/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
>*/
#include<cstring>
void findLargest(int **input, int nRows, int mCols)
{
    int lsum = -2147483648;
    int rcNum = 0;
    char rORc[7];
    strcpy(rORc, "row");
    int i,j,sum=0;
    for(i=0;i<nRows;i++){
        for(j=0;j<mCols;j++){
            sum = sum + input[i][j];
        }
        if(sum>lsum){
            lsum = sum;
            rcNum = i;
        }
        sum = 0;
    }
    sum = 0;
    for(i=0;i<mCols;i++){
        for(j=0;j<nRows;j++){
            sum = sum + input[j][i];
        }
        if(sum>lsum){
            lsum = sum;
            rcNum = i;
            strcpy(rORc, "column");
        }
        sum = 0;
    }
    cout << rORc << ' ' << rcNum << ' ' << lsum;
}
