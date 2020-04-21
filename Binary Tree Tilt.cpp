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
    int cnt=0;
    int inorder(TreeNode* root)
    {
        TreeNode *current=root;
        int l=0,m=0,r=0;
        if(current->left==NULL&&current->right==NULL)
        {
            return current->val;
        }
        if(current->left!=NULL)
        {
            l=inorder(current->left);
        }
        if(current->right!=NULL)
        {
            r=inorder(current->right);
        }
        cnt+=abs(l-r);
        return (l+r+current->val);
    }
    int findTilt(TreeNode* root) {
        if(root==NULL)return  0;
        inorder(root);
        return cnt;
    }
};