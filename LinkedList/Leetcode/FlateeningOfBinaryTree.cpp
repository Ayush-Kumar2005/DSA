#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;

        // flatten left and right subtrees
        flatten(root->left);
        flatten(root->right);

        // store right subtree
        TreeNode* tempRight = root->right;

        // move left to right
        root->right = root->left;
        root->left = nullptr;

        // find the tail of the new right subtree
        TreeNode* curr = root;
        while (curr->right) curr = curr->right;

        // attach the old right subtree
        curr->right = tempRight;
    }
};
