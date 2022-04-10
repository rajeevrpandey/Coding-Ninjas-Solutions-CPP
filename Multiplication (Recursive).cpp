int multiplyNumbers(int m, int n) {
    if(m==0 || n==0){
        return 0;
    }
    else
        return n + multiplyNumbers(m-1, n);
}
