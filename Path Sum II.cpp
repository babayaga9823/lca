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
    vector<vector<int>>vt;
    void inorder(TreeNode* root,vector<int>v)
    {
       if(root==NULL)return;
       
        v.push_back(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
          vt.push_back(v);
        }
       if(root->left!=NULL)
       {
           inorder(root->left,v);
       }
       if(root->right!=NULL)
       {
           inorder(root->right,v); 
       }

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>>v;
        vector<int>rv;
        if(root==NULL)return v;
        inorder(root,rv);
       for(auto it:vt)
       {
           int z=accumulate(it.begin(),it.end(),0);
           if(z==sum)
           {
               v.push_back(it);
           }
       }
        vt.clear();
        return v;
    }
};