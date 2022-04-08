void insertionSort(int *input, int size)
{
    //Write your code here
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = input[i];
        j = i - 1;
 
       
        while (j >= 0 && input[j] > key)
        {
            input[j + 1] = input[j];
            j = j - 1;
        }
        input[j + 1] = key;
    }
}
