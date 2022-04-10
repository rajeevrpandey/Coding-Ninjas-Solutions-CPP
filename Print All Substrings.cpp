void printSubstrings(char input[]) {
    // outermost for loop
    // this is for the selection
    // of starting point
   	for (int i = 0; input[i]; i++) {
       
        // 2nd for loop is for selection
        // of ending point
        for (int j = i; input[j]; j++) {
           
            // 3rd loop is for printing from
            // starting point to ending point
            for (int k = i; k <= j; k++) {
                cout << input[k];
            }
           
            // changing the line after printing
            // from starting point to ending point
            cout << endl;
        }
    }
 
    
}
