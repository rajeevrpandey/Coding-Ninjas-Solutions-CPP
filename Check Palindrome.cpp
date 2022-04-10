bool checkPalindrome(char str[]) {
    // Write your code here
    int i = 0;
    // int j = str.length() - 1;
    int j = 0;
    while (str[j])
        j++;
    j--;
    // cout << endl << i << endl << j;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
