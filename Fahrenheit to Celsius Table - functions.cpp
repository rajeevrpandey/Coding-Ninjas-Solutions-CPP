void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    int F=start, C;
    while(F<=end){
        C = 5.0/9 * (F-32);
        cout << F << "\t" << C << endl;
        F += step;
    }
    
}
