#include<iostream>
using namespace std;

int main() {
	// Write your code here
    long x,dig,rev=0,pv=1;
    cin >> x;
	while(x>0){
        dig = x%2;
        rev = rev+dig*pv;
        x = x/2;
        pv*=10;
    }
    cout << rev;
}
