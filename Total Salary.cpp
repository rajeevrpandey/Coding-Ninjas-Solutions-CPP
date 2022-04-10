#include<iostream>
#include <cmath>
using namespace std;

int main() {
	// Write your code here
    int basic;
    char grade;
    cin >> basic >> grade;
    double hra,da,allow,pf,totalSalary;
    hra   = 0.20 * basic;
	da    = 0.50 * basic;
	if (grade == 'A')
        allow = 1700;
	else if (grade == 'B')
        allow = 1500;
	else
        allow = 1300;
	pf    = 0.11 * basic;
	totalSalary = basic + hra + da + allow - pf;
	cout << llround(totalSalary);
}
