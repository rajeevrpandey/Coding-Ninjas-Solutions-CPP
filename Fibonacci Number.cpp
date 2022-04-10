bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */int n1,n2,n3,i;
    n1=0,n2=1;
    if(n == n1||n == n2)
        return true;
    for(i=3;n3<=n;i++)
    {
        
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if(n3 == n)
            return true;
    }
        return false;
    


}
