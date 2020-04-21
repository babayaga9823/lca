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
    priority_queue<int>pq;
    int K;
    void inorder(TreeNode* root)
    {
        if(root->left!=NULL)inorder(root->left);
        pq.push(root->val);
        if(pq.size()>K)
        {
            pq.pop();
        }
        if(root->right!=NULL)inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        K=k;
        if(root==NULL)return 0;
        inorder(root);
        int z=pq.top();
        // pq.clear();
        return z;
    }
};