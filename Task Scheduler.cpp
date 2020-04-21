class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mpfrq;
        priority_queue<int>pq;
        for(int i=0;i<tasks.size();i++)mpfrq[tasks[i]]++;
        for(auto it:mpfrq)pq.push(it.second);
        int tot=0;
       
        while(!pq.empty())
        {
            vector<int>tmp;
            for(int i=0;i<=n;i++)
            {
                if(!pq.empty())
                {
                    tmp.push_back(pq.top());
                    // cout<<"Pop "<<pq.top()<<endl;
                    pq.pop();
                }
            }
            for(auto it:tmp)
            {
                it--;
                if(it>0)pq.push(it);
            }
            // if(pq.empty())cout<<"Yes "<<tot<<endl;
            // if(!pq.empty())cout<<"tot bf "<<tot<<" "<<pq.size()<<" "<<n+1<<endl;
            tot+=pq.empty()?tmp.size():n+1;
             // if(!pq.empty())cout<<"tot af "<<tot<<" "<<pq.size()<<" "<<n+1<<endl;
        }
        return tot;
    }
};