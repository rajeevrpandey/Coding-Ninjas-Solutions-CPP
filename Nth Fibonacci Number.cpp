#include<iostream>
using namespace std;


int main(){
    //Write your code here.    
    int n,n1,n2,n3,i;
    cin >> n;
    if(n==1||n==2)
        cout << 1;
    else{
    for(n1=1,n2=1,i=3;i<=n;i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
        cout << n3;
    }
}
