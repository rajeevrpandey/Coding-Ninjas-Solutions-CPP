#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int pow=1,x,n;
    cin >> x >> n;
    while(n>0){
        pow *= x;
        n--;
    }
    cout << pow;
	
}
