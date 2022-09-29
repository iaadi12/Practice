class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isMirror(root->left, root->right);
        
        
    }
    bool isMirror(TreeNode *left, TreeNode *right)
    {
        if(left==NULL || right==NULL)
            return left==right;
        if(left->val != right->val) return false;
        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
};
