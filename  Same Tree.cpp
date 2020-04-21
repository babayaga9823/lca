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
    vector<int>alv;
    void inorder(TreeNode* root)
    {
        TreeNode *current=root;
        if(current->left!=NULL)inorder(current->left);
        if(current->left==NULL&&current->right!=NULL)alv.push_back(INT_MIN);
        alv.push_back(current->val);
        if(current->right!=NULL)inorder(current->right);
        if(current->left!=NULL&&current->right==NULL)alv.push_back(INT_MIN);
    }
    void preorder(TreeNode* root)
    {
        TreeNode *current=root;
        alv.push_back(current->val);
        if(current->left!=NULL)preorder(current->left);
        if(current->right!=NULL)preorder(current->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)return true;
        if(p==NULL||q==NULL)return false;
        vector<int>inp,inq,prep,preq;
        inorder(p);
        inp=alv;
         alv.clear();
        
        inorder(q);
        inq=alv;
        alv.clear();
        
        preorder(p);
        prep=alv;
        alv.clear();
        
       preorder(q);
        preq=alv;
        alv.clear();
        if(inp.size()!=inq.size())return false;
        for(int i=0;i<inp.size();i++)
        {
            if(inp[i]==inq[i]){}
                else return false;
        }
         for(int i=0;i<prep.size();i++)
        {
            if(prep[i]==preq[i]){}
                else return false;
        }
        return true;
    }
};