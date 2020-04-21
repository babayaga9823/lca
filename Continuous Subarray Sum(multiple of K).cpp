class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int K) {
      if(nums.size()==0)return 0;
      map<int,int>mp;
		mp[0] = 1;
        int count = 0, sum = 0;
        for(int a : nums) {
            sum = (sum + a) % K;
            if(sum < 0) sum += K;  // Because -1 % 5 = -1, but we need the positive mod 4
            count += mp[sum];
            mp[sum]++;
        }
        return count;
           
    }
};
