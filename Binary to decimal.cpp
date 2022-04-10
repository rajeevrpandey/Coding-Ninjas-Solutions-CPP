#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,dig,rev=0,pv=1;
    cin >> x;
	while(x>0){
        dig = x%10;
        rev = rev + dig*pv;
        x = x/10;
        pv*=2;
    }
    cout << rev;
}
