#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) {
	int i,j,k;
    for(i=0;i<row;i++){
        for(k=1;k<=row-i;k++){
            for(j=0;j<col;j++){
                cout << input[i][j] << ' ';
            }
            cout << endl;
        }
    }

}
