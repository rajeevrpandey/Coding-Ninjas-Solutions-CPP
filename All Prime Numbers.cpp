#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  	int n;
    cin >> n;
    cout << 2 << endl;
    for(int i=3;i<=n;i++){
        
        bool divided = false;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                divided = true;
                break;
            }
        }
        if(!divided)
            cout << i << endl;
    }
}
