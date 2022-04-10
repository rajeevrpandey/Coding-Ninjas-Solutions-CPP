// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    int len = 0;
    while (input[len])
        len++;
    if(len <= 1)
        return;
    pairStar(input+1);
    if(input[0]==input[1]){
        for(int i=2*len; i>=1; i--)
            input[i+1]=input[i];
        input[1]='*';
    }

}
