#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin>>n;
    int max=INT_MIN,secondMax=INT_MIN;
    int num;
    int count=1;
    
    while(count<=n){
        cin>>num;
        if (num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax&&num!=max){
            secondMax=num;
        }
        count++;
        
        
    }
    cout<<secondMax<<endl;
    
}
