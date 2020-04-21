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
    int maxi=INT_MIN,s=1;
    int postorder(TreeNode* root,int z)
    {
        if(root==NULL)
         return 0;
        int left=0,right=0;
        if(root->left==NULL&&root->right==NULL)
        {
            if(z>maxi)maxi=z;
            return maxi;
        }
       if(root->left!=NULL) 
       {
            left=postorder(root->left,z+1);
       }
        
       if(root->right!=NULL) 
       {
             right=postorder(root->right,z+1);
       }
        if(left!=0&&right!=0)return max(left,right);
        else
        {
            if(left==0)return right;
            if(right==0)return left;
        }
        return 0;
    }
    
    int maxDepth(TreeNode* root) {
           if(root==NULL)
         return 0;
        return postorder(root,1);
    }
};