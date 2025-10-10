// class Solution {
// public:
//     bool helper(TreeNode* p, TreeNode* q) {
//         if (p == nullptr && q == nullptr) return true;
//         if (p == nullptr || q == nullptr) return false;

//         if (p->val != q->val) return false;
//         return helper(p->left, q->right) && helper(p->right, q->left);
//     }

//     bool isSymmetric(TreeNode* root) {
//         if (root == nullptr) return true;
//         return helper(root->left, root->right);
//     }
// };



//OPTIMIZATION
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = getLeftHeight(root);
        int rightHeight = getRightHeight(root);

        if (leftHeight == rightHeight) {
            // Perfect binary tree
            return (1 << leftHeight) - 1;
        }

        // Otherwise, count recursively
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

private:
    int getLeftHeight(TreeNode* node) {
        int height = 0;
        while (node) {
            height++;
            node = node->left;
        }
        return height;
    }

    int getRightHeight(TreeNode* node) {
        int height = 0;
        while (node) {
            height++;
            node = node->right;
        }
        return height;
    }
};
