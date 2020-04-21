class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
         TreeNode *current=root;
        vector<int>v,l,r;
        if(current==NULL)return v;
         v.push_back(current->val);
        if(current->left!=NULL)
        {
            l=preorderTraversal(current->left);
        }
        if(current->right!=NULL)
        {
            r=preorderTraversal(current->right);
        }
        for(int i=0;i<l.size();i++)v.push_back(l[i]);
        for(int i=0;i<r.size();i++)v.push_back(r[i]);
        return v;
    }
};