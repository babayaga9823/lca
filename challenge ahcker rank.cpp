#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,al,ar,cnt=0;
        cin>>n>>m;
        al=n;
        ar=m;
        if(al>ar)return 0;
        while(ar-al>=0)
        {
            int z=al;
            for(int i=1;i<=sqrt(al);i++)
            {
                if(z%i==0)
                {
                        int d=al/i;
                     // cout<<" ** "<<i<<" "<<d<<endl;
                    if(i%2==1)cnt+=i;
                    if(d%2==1&&i!=d)cnt+=d;
                }
                // else cnt+=1;
            }
            al++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}









// Zach likes to play with positive integers and their divisors. He asked you to come up with an algorithm, that could play the following game:

// Let's define f(n) as the sum of all odd divisors of n. I.e. f(10) = 1 + 5 = 6 and f(21) = 1 + 3 + 7 + 21 = 32. The game is to calculate f(l) + f(l + 1) + ... + f(r - 1) + f(r) for the given integers l and r.

// Input Format

// The first line of the input contains one integer T denoting the number of test cases.

// The only line of the test case description contains two positive integers l and r.

// Constraints

// 1 ≤ T ≤ 10
// 1 ≤ l ≤ r ≤ 10000
// Output Format

// For each test case, output the required sum on a separate line.

// Sample Input 0

// 2
// 1 10
// 42 42
// Sample Output 0

// 45
// 32
// Explanation 0

// Test case 1: f(1) + f(2) + ... + f(10) = 1 + 1 + 4 + 1 + 6 + 4 + 8 + 1 + 13 + 6 = 45

// Test case 2: f(42) = 32