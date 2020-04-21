#include <bits/stdc++.h>

using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1],al[n*m+1];
        for(int i=0;i<n;i++)cin>>a[i];
        int alp=m,alcnt=0;
        while(alp--)
        {
            for(int i=0;i<n;i++)al[alcnt++]=a[i];
        }
        
        int maxth=INT_MIN,maxeh=0;
        for(int i=0;i<alcnt;i++)
        {
            maxeh=maxeh+al[i];
            maxth=max(maxeh,maxth);
            if(maxeh<0)maxeh=0;
        }
        cout<<maxth<<endl;
    }
    return 0;
}





// You are given an array A with size N (indexed from 0) and an integer K. Let's define another array B with size N · K as the array that's formed by concatenating K copies of array A.

// For example, if A = {1, 2} and K = 3, then B = {1, 2, 1, 2, 1, 2}.

// You have to find the maximum subarray sum of the array B. Fomally, you should compute the maximum value of Bi + Bi+1 + Bi+2 + ... + Bj, where 0 ≤ i ≤ j < N · K.

// Input Format

// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

// The first line of each test case contains two space-separated integers N and K.

// The second line contains N space-separated integers A0, A1, ... , AN-1.

// Constraints

// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 100000
// 1 ≤ K ≤ 100000
// -100000 ≤ Ai ≤ 1000000 for each valid i
// Output Format

// For each test case, print a single line containing the maximum subarray sum of B.

// Sample Input 0

// 2
// 2 3
// 1 2
// 3 2
// 1 -2 1
// Sample Output 0

// 9
// 2
// Explanation 0

// Test case 1: B = {1, 2, 1, 2, 1, 2} and the subarray with maximum sum is the whole {1, 2, 1, 2, 1, 2}. Hence, the answer is 9.

// Test case 2: B = {1, -2, 1, 1, -2, 1} and the subarray with maximum sum is {1, 1}. Hence, the answer is 2.

