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
    vector<int> levelorder(TreeNode* root)
    {
        vector<int>v;
        if(root==NULL)return v;
        queue<TreeNode*>q1,q2;
        q1.push(root);
        while(!q1.empty())
        {
            int z=0;
           while(!q1.empty())
           {
                TreeNode *current=q1.front();
                q1.pop();
               if(current->left!=NULL)q2.push(current->left);
               if(current->right!=NULL)q2.push(current->right);
               z=current->val;
           } 
            v.push_back(z);
            q1=q2;
            while(!q2.empty())q2.pop();
        }
        return v;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        v=levelorder(root);
        // cout<<" ++ "<<v.size()<<endl;
        return v;
    }
};