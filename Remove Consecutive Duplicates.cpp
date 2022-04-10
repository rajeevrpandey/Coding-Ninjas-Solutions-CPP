void removeConsecutiveDuplicates(char input[]) {
    int i=0,j=0;
    while(input[j]){
        if(input[j+1]!=input[j]){
            input[i] = input[j];
            i++;
        }
        j++;
    }
    input[i] = '\0';   
}
