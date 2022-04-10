void print(int n){
    //write your code here
    if(n == 0)
        return;
    print(n-1);
    cout << n << " ";
}
