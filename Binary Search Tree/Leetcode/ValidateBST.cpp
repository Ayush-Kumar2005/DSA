//----------METHOD-1:for each node checking that root  val  is greater than max node value in in left subtree and smaller thanmin value of right subtree---------------------------------
// class Solution {
// public:
//     int findMax(TreeNode* root) {
//         while (root->right) {
//             root = root->right;
//         }
//         return root->val;
//     }

//     int findMin(TreeNode* root) {
//         while (root->left) {
//             root = root->left;
//         }
//         return root->val;
//     }

//     bool isValidBST(TreeNode* root) {
//         if (!root) return true;

//         // Check left subtree max
//         if (root->left) {
//             int leftMax = findMax(root->left);
//             if (leftMax >= root->val) return false;
//         }

//         // Check right subtree min
//         if (root->right) {
//             int rightMin = findMin(root->right);
//             if (rightMin <= root->val) return false;
//         }

//         // Recursively check subtrees
//         return isValidBST(root->left) && isValidBST(root->right);
//     }
// };
//----------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------METHOD-2:Finding inorder and check whether it is sorted or not using an array---------------------------------
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

//--------------------------METHOD-3:Finding inorder and check whether it is sorted or not using a temp variable---------------------------------
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
