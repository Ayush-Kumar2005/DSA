//-----------------------------------------------------------------------------------------------

//BRUTE FORCE
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] >= target) {
//                 return i;
//             }
//         }
//         return nums.size();
//     }
// };

// T.C = O(n);
// S.C = O(1);

//-----------------------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------------------

// STL (Lower_bound)
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//     }
// };


// T.C = O(n)
// S.C = O(1)

//-----------------------------------------------------------------------------------------------