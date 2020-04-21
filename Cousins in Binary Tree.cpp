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
     bool levelOrder(TreeNode* root,int x,int y) {
        queue<TreeNode*> q1,q2;
        q1.push(root);
        // vector<vector<int>> val;
        if(root==NULL)return false;
        while(!q1.empty())
        {
            TreeNode* current;
            q2=q1;
            while(!q1.empty())q1.pop();
            set<int>st;
            // TreeNode* prev=root;
            while(!q2.empty())
            {
               current=q2.front();
                q2.pop();
                st.insert(current->val);
                if(current->left!=NULL)q1.push(current->left);   
                if(current->right!=NULL)q1.push(current->right);
                if(current->left!=NULL&&current->right!=NULL&&((current->right->val==x&&current->left->val==y)||(current->right->val==y&&current->left->val==x)))return false;
                // prev=current;
            }
            if(st.find(x)!=st.end()&&st.find(y)!=st.end())return true;
            // val.push_back(v);
        }
        return false;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)return false;
        return levelOrder(root,x,y);
    }
};