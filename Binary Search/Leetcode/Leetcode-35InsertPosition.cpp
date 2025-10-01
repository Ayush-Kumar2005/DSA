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


// T.C = O(logN)
// S.C = O(1)

//-----------------------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------------------

// OPTIMAL :- BINARY SEARCH
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int left = 0, right = nums.size() - 1;
        
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
            
//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] < target)
//                 left = mid + 1;
//             else
//                 right = mid - 1;
//         }
//         return left;  // Insert position
//     }
// };



// T.C = O(logN)
// S.C = O(1)

//-----------------------------------------------------------------------------------------------
