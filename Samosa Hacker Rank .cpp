#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i;
        cin>>n;
        int a[n]={0};
        set<int>st;
        for(i=0;i<n;i++)
        {  
            cin>>a[i];
            if(a[i]%2==0&&a[i]%3==0&&a[i]%5!=0)st.insert(a[i]);
        }
        cout<<st.size()<<endl;
    return 0;
}


// Sebin is the best Samosa maker in CodeCity and due to this, his Samosa’s popularity grew. It grew so much that he was not able to make enough for everyone.

// So Abin, his friend, came up with an idea. He gave a unique number to all the customers and thought that the customer's whose number is divisible by 2 and by 3 are eligible to buy their product. But if the unique number is divisible by 5, then that customer is not eligible to buy his product.

// Sebin and Abin appoint Vipin (their new Marketing Executive) to sell the Samosas. When a customer comes to buy the product, they show their unique number and then Vipin accordingly decides whether to sell to him or not. A customer can come any number of times.

// Help them in finding the total number of different customers who are eligible to buy the Samosas.

// Input Format

// First line will contain N, the number of customers.
// Next line will contain N integers, the unique number given to each customer.
// Constraints

// 1 ≤ N ≤ 100000
// 2 ≤ A[i] ≤ 1000000000
// Output Format

// Output total number of different (unique) customers who are eligible.

// Sample Input 0

// 5
// 2 3 6 50 9
// Sample Output 0

// 1
// Sample Input 1

// 8
// 12 7 42 30 5 9 6 3
// Sample Output 1

// 3