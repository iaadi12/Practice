Solution 1--->
  
  class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        if(root->val > val) root->left = insertIntoBST(root->left, val);
        else root->right = insertIntoBST(root->right, val);
        return root;
    }
};


Solution 2--->
  
  class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            return new TreeNode(val);
        }
        TreeNode *r=NULL;
        TreeNode *rt=root;
        while(rt != NULL)
        {
            r=rt;
            if(val == rt->val)
                return NULL;
            else if(val < rt->val)
                rt = rt->left;
            else
                rt = rt->right;
        }
        TreeNode* p = new TreeNode;
        p->val=val;
        p->left=p->right=NULL;
        if(p->val < r->val)
            r->left = p;
        else
            r->right = p;
        return root;
    }
};
