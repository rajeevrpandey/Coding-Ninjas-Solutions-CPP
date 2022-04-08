void reverseStringWordWise(char input[]) {
    // Write your code here
    int len = 0;
    // char temp;
    int j = 0;
    while (input[j] != '\0'){ 
        len++;
        j++;
    }

    int start = 0, end = len - 1;			// reversing the entire string
    while(start<end){
        //swapping the characters at start and end
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--; 
    }
    int i=0;
    while(input[i] != '\0'){
        start=i;
        while(input[i] != ' '){ 
            i++;
            if(i >= len)
                break;
        }
        end=i-1;
        while(start<end){
            //swapping the characters at start and end
            char temp = input[start];
            input[start] = input[end];
            input[end] = temp;
            start++;
            end--; 
        }
        i++;
        if(i >= len)
            break;
    }
    
}
