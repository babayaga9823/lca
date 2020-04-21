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
    vector<int>v;
    void inorder(TreeNode* root,int z)
    {
       if(root==NULL)return;
        z*=10;
        z+=root->val;
        if(root->left==NULL&&root->right==NULL)
        {
           v.push_back(z);
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
    int sumNumbers(TreeNode* root) {
        int z=0;
        if(root==NULL)return z;
        inorder(root,z);
       for(auto it:v)z+=it;
        v.clear();
        return z;
    }
};