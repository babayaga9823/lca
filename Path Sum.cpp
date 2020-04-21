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
    void inorder(TreeNode* root,int z)
    {
       if(root==NULL)return;
       
        z+=root->val;
        if(root->left==NULL&&root->right==NULL)
        {
           st.insert(z);
        }
       if(root->left!=NULL)
       {
           inorder(root->left,z);
       }
       if(root->right!=NULL)
       {
           inorder(root->right,z); 
       }

    }
    bool hasPathSum(TreeNode* root, int sum) {
        int z=0;
        if(root==NULL)return z;
        inorder(root,z);
       bool flag=false;
     if(st.find(sum)!=st.end())flag=true;
        st.clear();
        return flag;
    }
};