Solution 1--->
  class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root->left == NULL && root->right == NULL)
            return root;
        while(root)
        {
            if(val < root->val)
                root=root->left;
            else if(val > root->val)
                root=root->right;
            else
                return root;
        }
        return root;
    }
};

Solution 2--->
  
  class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return {};
        if(val == root->val)
            return root;
        if(val < root->val)
            return searchBST(root->left,val);
        else if(val > root->val)
            return searchBST(root->right,val);
        else
            return root;
        return root;
    }
};
  
