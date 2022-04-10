#include <cstring>
string getCompressedString(string &input) {
    int n = 0;
    //while(input[n] != '\0'){ 
        //n++;
    //}
    string temp="";
	n=input.size();
    int i=0;//for traversing the entire vector
    int ansIndex = 0;
    int j;
    while(i < n)
    {
        j = i+1; //for comparing the next character we had taken j=i+1
		while(j<n && input[i] == input[j])
        {
            j++;
        }
        /* when you will come here ?
        either we had traversed the whole vector
        or we had encountered the new character */
        
        // store the old char
       //input[ansIndex++] = input[i];
        temp+=input[i];
        int count  = j-i;
        if(count>1)
        {
            temp+= count+48;  
            //input[ansIndex++]=count+48;
        }
        //moving to the new different character
        i=j;
    }
   // input[ansIndex] = '\0';   
    return temp;
    
}
