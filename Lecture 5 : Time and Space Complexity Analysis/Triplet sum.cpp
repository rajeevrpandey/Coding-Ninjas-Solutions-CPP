/*
You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.
Note :
Given array/list can contain duplicate elements.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains an integer 'X'.
Output format :
For each test case, print the total number of triplets present in the array/list.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9

Time Limit: 1 sec
Sample Input 1:
1
7
1 2 3 4 5 6 7 
12
Sample Output 1:
5
Sample Input 2:
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10
Sample Output 2:
0
5


 Explanation for Input 2:
Since there doesn't exist any triplet with sum equal to 19 for the first query, we print 0.

For the second query, we have 5 triplets in total that sum up to 10. They are, (2, 8, 0), (2, 11, -3), (-5, 5, 10), (8, 5, -3) and (-6, 5, 11)
*/

// int tripletSum(int *arr, int n, int num)
// {
// 	//Write your code here
// }

int pairSum(int *arr, int start, int end, int num) {
    int count = 0;
    for(; start < end;) {
         if(arr[start] + arr[end] < num) {
            start++;
        } else if (arr[start] + arr[end] > num) {
            end--;
        } else {
            int start_element = arr[start];
            int end_element =  arr[end];
            
            //if all the elements are same
            if(start_element == end_element) {
                int total = (end - start) + 1;
                count += ((total ) * (total - 1) ) / 2;  // n choose 2;
                return count;
            }
            
            int start_temp = start;
            int end_temp = end;
            
            for(;start_temp <= end_temp and arr[start_temp] == start_element;) {
               	start_temp++;
            }
            
            for(;start_temp <= end_temp and arr[end_temp] == end_element;) {
                end_temp--;
            }
            
            count += (start_temp - start) * (end - end_temp);
            start = start_temp;
            end = end_temp;
        }
    }
    
    return count;
}

int tripletSum(int *arr, int n, int num)
{
    sort(arr, arr + n);
    int numTriplets = 0;
    for (int i = 0; i < n; i++) {
        int pairSumFor = num - arr[i];
        int numPairs = pairSum(arr, (i + 1), (n - 1), pairSumFor);
        numTriplets += numPairs;
    }
    return numTriplets;
}

// Time Complexity : O(nlogn)
// Space Complexity : O(logn) -> Auxillary Space for Sort Function
