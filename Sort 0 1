void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int i = 0, temp;
    int j = size - 1;
     
    while(i < j)					// pointer i moves left to right and j moves right to left
    {
        if(input[i] == 1)			// i found a '1' 
        {
            temp = input[j];
  			input[j] = input[i];
  			input[i] = temp;		// the '1' got pushed to the right
            j--;					// j collects all the '1's to the right
        }
        else						// i = 0
        	i++;					// move forward and find '1'
    }
}
