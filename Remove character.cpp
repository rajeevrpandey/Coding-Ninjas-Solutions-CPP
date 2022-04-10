void removeAllOccurrencesOfChar(char input[], char c) {
    int i=0,j=0;
    while(input[i]){
        if(input[i]!=c){
            input[j] = input[i];
            j++;
        }
        i++;
    }
    input[j] = '\0';
    
}
