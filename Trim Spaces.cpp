void trimSpaces(char input[]) {
    // Write your code here
    int i = 0,j=0;
    while(input[i]){
        if(input[i] != ' '){
            // for(j=i;input[j];j++){
            //     input[j]=input[j+1];
            // }   							it didnt work in case of multiple consecutive spaces
            input[j]=input[i];
            j++;
        }
        i++;
      
    }
      input[j]='\0';
}
