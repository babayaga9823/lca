class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q1,q2;
        q1.push(root);
        vector<vector<int>> val;
        if(root==NULL)return val;
        while(!q1.empty())
        {
            TreeNode* current;
            q2=q1;
            while(!q1.empty())q1.pop();
            vector<int>v;
            while(!q2.empty())
            {
               current=q2.front();
                q2.pop();
                v.push_back(current->val);
                if(current->left!=NULL)q1.push(current->left);   
                if(current->right!=NULL)q1.push(current->right);
            }
            val.push_back(v);
        }
        return val;
    }
};