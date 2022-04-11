void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
    if(input[0]=='\0' || input[1]=='\0')
        return;
    removeConsecutiveDuplicates(input+1);
    if(input[0]==input[1]){
        int i=1;
        while(input[i]==input[0])
            i++;
        int j = 1;
        while(input[i]){
            input[j]=input[i];
            i++;
            j++;
        }
        input[j]=input[i];
    }


}
