char highestOccurringChar(char input[]) {
    int charfreq[256] = {0};
    int maxindex=0, max=0;
    int i = 0, j;
    while(input[i]){
        j = int(input[i]);
        charfreq[j]++;
        i++;
    }
    for(i=0;i<256;i++){
        if(charfreq[i]>max){
            max = charfreq[i];
            maxindex = i;
        }
    }
    return char(maxindex);
}
