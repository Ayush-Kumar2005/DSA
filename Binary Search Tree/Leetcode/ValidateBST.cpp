//--------------------------METHOD-1:Finding inorder and check whether it is sorted or not using an array---------------------------------
// class Solution {
// public:
//     void inorder(TreeNode* root , vector<int>& v){
//         if(root==NULL) return;
//         inorder(root->left , v);
//         v.push_back(root->val);
//         inorder(root->right , v);
//     }
//     bool isValidBST(TreeNode* root) {
//         vector<int> v;
//         inorder(root , v);
//         for(int i=1;i<v.size();i++){
//             if(v[i]<=v[i-1]) return false;
//         }
//         return true;
//     }
// };
//----------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------METHOD-2:Finding inorder and check whether it is sorted or not using a temp variable---------------------------------
// class Solution {
// public:
//     bool inorder(TreeNode* root, long long &prev) {
//         if (root==NULL) return true;

//         if (!inorder(root->left, prev)) return false;

//         if (root->val <= prev) return false;
//         prev = root->val;

//         return inorder(root->right, prev);
//     }

//     bool isValidBST(TreeNode* root) {
//         long long prev = LLONG_MIN;
//         return inorder(root, prev);
//     }
// };
//----------------------------------------------------------------------------------------------------------------------------------------------
