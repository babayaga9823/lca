#include<bits/stdc++.h>

using namespace std;

bool comp(pair<string,int>a,pair<string,int>b)
{
    if(a.second>b.second)return true;
    if(a.second==b.second)
    {
        if(a.first.length()>b.first.length())return true;
    }
    return false;
}
int main() {
   int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,l;
        map<string,int>mp;
        vector<string>v;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)//no of letters
        {
            for(j=0;j<s.length();j++)//starting index
            {
                char a[100000]={0};
                int acnt=0;
                for(l=0;l+j<s.length()&&l<=i;l++)
                {
                    a[acnt++]=s[l+j];
                }
                a[acnt]='\0';
                string st=a;
                mp[st]+=1;
                if(j==0)
                {
                    v.push_back(st);
                }
            }
        }
        
        
        vector<pair<string,int>>vpr;
        int parcnt=0;
        for(i=0;i<v.size();i++)
        {
           pair<string,int>pr;
            pr.first=v[i];
            pr.second=mp[v[i]];
            vpr.push_back(pr);
            // cout<<"** "<<pr.first<<" sec "<<pr.second<<endl;
        }
        sort(vpr.begin(),vpr.end(),comp);
        cout<<vpr[0].first<<endl;
    }
    return 0;
}

// Question

// Sagar wants some cash to buy groceries, but unfortunately, he doesn't have any with him. He remembers that his wife has stored some cash somewhere in the house, so he starts searching for it. After some time of searching, he found it stored in a small password protected box. The password for the box is with his wife who has gone for work and is unable to take calls at the moment. Fortunately, a string S, which serves as a hint for the password, is written on top of the box.

// Sagar knows that the secret password is a non-empty prefix of the string S (i.e., a substring of string S that occurs at the beginning of S). Also, he knows that:

// if a prefix occurs in S more often as a substring, then the probability that this prefix is the secret password is higher (the probability that a chosen prefix is the secret password is an increasing function of its number of occurrences in S)
// if two prefixes have the same number of occurrences in S, then the longer prefix has a higher probability of being the secret password
// Sagar wants to guess the secret password with the maximum possible probability of success. Help Sagar and find the prefix for which this probability is maximum.

// Input Format

// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// The second line contains a single string S with length N.
// Constraints

// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 100000
// S contains only lowercase English letters
// Output Format

// For each test case, print a single line containing one string - the prefix with the highest probability of being the secret password.

// Sample Input 0

// 3
// 3
// abc
// 5
// thyth
// 5
// abcbc
// Sample Output 0

// abc
// th
// abcbc
// Explanation 0

// Test case 1: Each prefix occurs in S the same number of times (once) and the prefix with maximum length is "abc", so the secret password is most likely "abc".

