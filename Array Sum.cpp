#include<iostream>
#include<climits>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */long int n, sum = 0;
    cin >> n;
    int a[1000000];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++)
        sum += a[i];
        
    cout << sum;
    
}
