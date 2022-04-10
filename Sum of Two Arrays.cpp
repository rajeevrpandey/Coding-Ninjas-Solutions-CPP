void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
//     int value1=0, value2=0;
//     long int result;
//     for(int i=0;i<size1;i++){
//         value1 = value1*10+input1[i];
//     }
//     for(int i=0;i<size2;i++){
//         value2 = value2*10+input2[i];
//     }
//     result = value1 + value2;
    
//     int largerInput = (size1>size2)?size1:size2;
    
//     for(int i=largerInput;i>=0;i--){
//         output[i] = result%10;
//         result = result/10;
//     }
    int largerInput = (size1>size2)?size1:size2;
    // int smallerInput = (size1<size2)?size1:size2;
    int result, carry = 0;
    // for(int i=size1-1;i>=0;i--){
    //     for(int j=size2-1;j>=0;j--){
    //         if(i<=smallerInput && j<=smallerInput){
    //             for(int k=largerInput;k>=0;k--){
    //                 result = input1 
    //             }
    //         }
    //     }
    // }
    int i=size1-1;
    int j=size2-1;
    int k=largerInput;
    while(i>=0 && j>=0 && k>=0){
        
        result = input1[i] + input2[j] + carry;
        carry = result / 10;
        output[k] = result % 10;
        i--;j--;k--;
        
    }
    if(i<0){
        while(j>=0 && k>=0){
        result = input2[j] + carry;
        carry = result / 10;
        output[k] = result % 10;
        j--;k--;
    	}
    }
    else{
        while(i>=0 && k>=0){
        
        result = input1[i] + carry;
        carry = result / 10;
        output[k] = result % 10;
        i--;k--;
        
    	}
    }
    output[k] = carry;
    
}
