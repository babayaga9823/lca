class Solution {
public:

unordered_map<int,int>mp;int freq=0;
int postorder(TreeNode* root)
{
    if(root==NULL)
     return 0;
    
    int left=postorder(root->left);
    int right=postorder(root->right);
    
    int sum=left+right+root->val;
    mp[sum]++;
    freq=max(freq,mp[sum]);
    return sum;
}

vector<int> findFrequentTreeSum(TreeNode* root) {
  vector<int>result;
  postorder(root);
  for(auto i:mp)
  {
      if(i.second==freq)
          result.push_back(i.first);
  }
    return result;
}
};