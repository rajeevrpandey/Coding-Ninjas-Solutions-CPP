/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
#include <cstring>
void minLengthWord(char input[], char output[]){
    // int n=input.size();
//     int n = 0;
//     while(input[n] != '\0'){ 
//         n++;
//     }
//     int minlen=0,j;
//     for(int i=0;i<n;i++){
//         while(input[j]!='\0'&&input[j]!=' ')
//             j++;
//         if(j-i>minlen){
//             minlen = j-i;
//             for(int k=i;k<j;k++)
//                 output+=input[k];
//         }
        
//         if(j >= n)
//             break;
//         i=j+1;
//         j++;
//     }
	int len = strlen(input);
    int si = 0, ei = 0;
    int min_length = len, min_start_index = 0;
    while (ei <= len)
    {
        if (ei < len && input[ei] != ' ')
            ei++;
         
        else
        {
           
            int curr_length = ei - si;
         
            if (curr_length < min_length) 
            {
                min_length = curr_length;
                min_start_index = si;
            }
          
	      ei++;
          si=ei;
        }
      
        
    }
 for(int i=0;i<min_length;i++)
 {
   output[i]=input[min_start_index++];
  
 }
}
