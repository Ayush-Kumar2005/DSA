// -------------------------------------LEETCODE-561 : ARRAY PARTITION -------------------------------------------------------
// APPROACH-1

// class Solution {
// public:
//     int arrayPairSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int maximizedSum=0;
//         for(int i=0;i<nums.size();i+=2)  maximizedSum+=nums[i];
//         return maximizedSum;
//     }
// };