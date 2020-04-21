class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int ind,maxi;
    KthLargest(int k, vector<int>& nums) {
        ind=k;
       for(int i=0;i<nums.size();i++)
       {
           pq.push(nums[i]);
           if(pq.size()>ind)
           {
               pq.pop();
           }
       }
        // cout<<"*** "<<pq.size()<<endl;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>ind)pq.pop();
        int z=pq.top();
        return z;
    }
};
