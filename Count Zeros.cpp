int countZeros(int n) {
    if(n>0 && n<=9)
        return 0;
    else if(n==0)
        return 1;
    else{
        if(n%10)
            return countZeros(n/10);
        else
            return 1 + countZeros(n/10);
    }

}
