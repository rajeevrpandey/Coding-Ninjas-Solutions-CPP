#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */char c;
	c = cin.get();
	int ch = 0, dig = 0, wh = 0;
	while (c != '$') {
		if(c>='a'&&c<='z')
            ch++;
        else if(c>='0'&&c<='9')
            dig++;
        else if(c==' '||c=='\t'||c=='\n')
            wh++;
		c = cin.get();
	}
	cout << ch << ' ' << dig << ' ' << wh;
  
}
