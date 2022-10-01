/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    vector<int>ans;
public:
    vector<int> Inorder(TreeNode* root)
    {
        if(!root)
            return {};
        Inorder(root->left);
        ans.push_back(root->val);
        Inorder(root->right);
        return ans;
    }
    bool findTarget(TreeNode* root, int k) {
        Inorder(root);
        for(int i=0; i< ans.size();i++)
        {
            for(int j=i+1; j<ans.size(); j++)
            {
                if(ans[i]+ans[j]==k)
                    return true;

            }
        }
        return false;
    }
    
};
