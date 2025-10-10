class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL){
            return (root->val==targetSum);
        }
        int newTarget = targetSum-root->val;

        return hasPathSum(root->left,newTarget) || hasPathSum(root->right,newTarget);
    }
};