// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> temp;
//         for(int i = 0; i < m; i++) temp.push_back(nums1[i]);
//         for(int i = 0; i < n; i++) temp.push_back(nums2[i]);
        
//         sort(temp.begin(), temp.end());
        
//         for(int i = 0; i < m + n; i++) nums1[i] = temp[i];
//     }

// };


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = 0;  // pointer for nums1 actual elements
//         int j = 0;  // pointer nums2

//         while (i < m + j && j < n) {
//             if (nums1[i] > nums2[j]) {
//                 // Shift elements in nums1 to the right
//                 for (int k = m + j; k > i; k--) {
//                     nums1[k] = nums1[k - 1];
//                 }
//                 nums1[i] = nums2[j];
//                 j++;
//             }
//             i++;
//         }

//         // fill remaining nums2
//         while (j < n) {
//             nums1[m + j] = nums2[j];
//             j++;
//         }
// }


// };


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;
//         int j = n - 1;
//         int k = m + n - 1;
        
//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }




// };