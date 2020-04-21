/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    set<int>st;
    void inorder(TreeNode* root) 
    {
        TreeNode *current=root;
        if(current->left!=NULL)
        {
            inorder(current->left);
        }
        st.insert(current->val);
        if(current->right!=NULL)
        {
            inorder(current->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL)return 0;
        inorder(root);
        vector<int>alv;
        int mini=INT_MAX;
        for(auto it:st)
        {
            alv.push_back(it);
        }
        st.clear();
        
        for(int i=0;i<=alv.size()-2;i++)
        {
            int z=abs(alv[i]-alv[i+1]);
           
            if(z<mini)mini=z;
        }
        return mini;
    }
};