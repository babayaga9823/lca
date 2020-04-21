#include <bits/stdc++.h>

using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,ccnt=0,lcnt=0,clcnt=0,tot=0;
        string s;
        cin>>n>>m;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='l')lcnt++;
            if(s[i]=='c')
            {ccnt++;
                for(j=i+1;j<s.length();j++)
                {
                    if(s[j]=='l')
                    {
                        clcnt++;
                    }
                }
            }
        }
        tot=clcnt*m;
        int z=m;
        for(i=1;i<=m;i++)
        {
            int mult=lcnt*ccnt*(m-i);
            tot+=mult;
        }
        cout<<tot<<endl;
    }
    return 0;
}


// Paul has a string S, that consists of N lowercase English letters. He then created a new string by repeating S exactly K times. For example, for S = "afgs" and K = 2, he would get "afgsafgs".

// Your task is to count the number of subsequences "cl" (not necessarily consecutive) in the new string.

// In other words, find the number pairs of indices i < j, such that the i-th and j-th characters in the new string are 'c' and 'l' respectively.

// Input Format

// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

// The first line of each test case contains two integers N and K, denoting the length of the initial string S and the number of repetitions respectively.

// The second line contains a string S. Its length is exactly N, and each of its characters is a lowercase English letter.

// Constraints

// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 10000
// 1 ≤ N * K ≤ 10000000
// Output Format

// For each test case, output a single line containing one integer - the number of subsequences "cl" in the new string.

// Sample Input 0

// 3
// 4 2
// clfl
// 7 1
// ccyzlcc
// 12 312
// clzlclzlczcl
// Sample Output 0

// 6
// 2
// 973440
