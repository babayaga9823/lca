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
    
    int findBottomLeftValue(TreeNode* root) {
         if(root==NULL)
         return 0;
     vector<vector<int>> val;
       
        val=levelOrder(root);
        return val[val.size()-1][0];
    }
};

// [2,1,3]
// [1,2,3,4,null,5,6,null,null,7]