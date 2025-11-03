// ----------------------------- LEETCODE-2089 : FIND TARGET INDICES AFTER SORTING ARRAY -------------------------------------------

// APPROACH-1 : USING HASH-MAP
// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         unordered_map<int, vector<int>> mp;
//         for (int i = 0; i < nums.size(); i++) {
//             mp[nums[i]].push_back(i);
//         }
//         if(mp.find(target)!=mp.end()){
//             return mp[target];
//         }
//         else return {};
//     }
// };