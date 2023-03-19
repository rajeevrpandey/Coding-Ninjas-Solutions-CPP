/*
You have made a smartphone app and want to set its subscription price such that the profit earned is maximised. There are certain users who will subscribe to your app only if their budget is greater than or equal to your price.
You will be provided with a list of size N having budgets of subscribers and you need to return the maximum profit that you can earn.
Lets say you decide that price of your app is Rs. x and there are N number of subscribers. So maximum profit you can earn is :
 m * x
where m is total number of subscribers whose budget is greater than or equal to x.
Input format :
Line 1 : N (No. of subscribers)
Line 2 : Budget of subscribers (separated by space)
Output Format :
 Maximum profit
Constraints :
1 <= N <= 10^6
1 <=budget[i]<=9999
Sample Input 1 :
4
30 20 53 14
Sample Output 1 :
60
Sample Output 1 Explanation :
Price of your app should be Rs. 20 or Rs. 30. For both prices, you can get the profit Rs. 60.
Sample Input 2 :
5
34 78 90 15 67
Sample Output 2 :
201
Sample Output 2 Explanation :
Price of your app should be Rs. 67. You can get the profit Rs. 201 (i.e. 3 * 67).
*/

#include<algorithm>

int maximumProfit(int budget[], int n) {
    // Write your code here
	sort(budget, budget + n);
    
    int *arr = new int[n];
    
    for(int i = 0; i < n; i++) {
        arr[i] = budget[i] * (n - i); 
    }
    
    int max_profit = 0;
    
    for(int i = 0; i < n; i++) {
     max_profit = max(arr[i], max_profit);  
    }
    
    return max_profit;
}
