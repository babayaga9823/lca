class Solution {
public:
    bool isPowerOfThree(int n) {
        // cout<<" ++ "<<n<<endl;
        bool flag=false;
        if(n==0)return false;
        if(n==1)return true;
        if(n%3==0)
        {
            if(n/3==1)return true;
            else flag=isPowerOfThree(n/3);
            return flag;
        }
        else return false;
        return flag;
    }
};