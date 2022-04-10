void spiralPrint(int **input, int nRows, int nCols)
{
    int nElements = nRows * nCols;
    int colStart, colEnd, rowStart, rowEnd, i, j;
    colStart = 0;
    colEnd = nCols - 1;
    rowStart = 0;
    rowEnd = nRows - 1;
    while(nElements){
        for(j = colStart;j <= colEnd; j++){
            cout << input[rowStart][j] << ' ';
            nElements--;
        }
        rowStart++;
        for(i = rowStart;i <= rowEnd; i++){
            cout << input[i][colEnd] << ' ';
            nElements--;
        }
        colEnd--;
        for(j = colEnd;j >= colStart; j--){
            cout << input[rowEnd][j] << ' ';
            nElements--;
        }
        rowEnd--;
        for(i = rowEnd;i >= rowStart; i--){
            cout << input[i][colStart] << ' ';
            nElements--;
        }
        colStart++;
    }
}
