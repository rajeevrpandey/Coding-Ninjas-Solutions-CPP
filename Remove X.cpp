// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    int len = 0;
    while (input[len])
        len++;
    if(len < 1)
        return;
    removeX(input+1);
    if(input[0]=='x'){
        for(int i=1; i<=len; i++)
            input[i-1]=input[i];
    }
}
