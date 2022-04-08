#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,curr,prev;
    cin >> n;
    bool isDec = true, allOK = true;
	cin >> prev;
    n--;
    while(n){
        cin >> curr;
        if(curr == prev){
            allOK = false;
            cout << "false";
            break;
        }
        else if(curr > prev){
            if(isDec == true)
                isDec = false;
        }
        else{
            if(isDec == false){
                allOK = false;
                cout << "false";
                break;
            }
        }
    prev = curr;
    n--;
    }
    if(allOK == true)
        cout << "true";
}
