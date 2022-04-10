bool checkPalindrome(char input[]) {
    int i = 0;
    while (input[i])
        i++;
    if(i<=1)
        return true;
    else if(i==2){
        if(input[0]==input[1])
            return true;
        else
            return false;
    }
    else{
        if(input[0]==input[i-1]){
            input[i-1] = '\0';
            return true && checkPalindrome(input+1);
        }
        else
            return false;
    }
}
