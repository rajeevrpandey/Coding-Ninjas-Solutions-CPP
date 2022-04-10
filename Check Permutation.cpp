bool isPermutation(char input1[], char input2[]) {
    // int i,j;
    // for(i=0;input1[i];i++){
    //     for(j=0;input2[j];j++){
    //         if(input1[i] == input2[j]){
    //             input1[i] = 'X';
    //             input2[j] = 'Y';
    //         }
    //     }
    // }
    // for(i=0;input1[i];i++){
    //     if(input1[i] != 'X')
    //         return false;
    // }
    // for(i=0;input2[i];i++){
    //     if(input2[i] != 'Y')
    //         return false;
    // }
    // return true;
    
    int freqArr[256] = { 0 };
    int i,j;
    for(i=0;input1[i];i++){
         j = int(input1[i]);
        freqArr[j]++;
    }
    for(i=0;input2[i];i++){
         j = int(input2[i]);
        freqArr[j]--;
    }
    for(i=0;i<=255;i++){
        if(freqArr[i]!=0)
            return false;
    }
    return true;
}
