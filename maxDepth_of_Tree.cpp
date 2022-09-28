class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return NULL;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        return 1+max(lh,rh);
    }
};
