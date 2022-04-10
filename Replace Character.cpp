void replaceCharacter(char input[], char c1, char c2) {
    // Write your code here
    int i = 0;
    while (input[i]){
        if(input[i] == c1)
            input[i] = c2;
        i++;
    }
    
}
