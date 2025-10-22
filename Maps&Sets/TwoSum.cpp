// ---------------------------------------METHOD-1: BRUTE FORCE APPROACH ---------------------------------------------
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         int n = arr.size();
//         for(int i=0;i<n;i++){
//             int required = target - arr[i];
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]==required){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };


// ----------------------------METHOD-2: TWO POINTER APPROACH --------------------------------------------------------
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         int n = arr.size();

//         vector<pair<int,int>> nums;
//         for (int i = 0; i < n; i++) {
//             nums.push_back({arr[i], i});
//         }

//         sort(nums.begin(), nums.end());

//         int low = 0, high = n - 1;

//         while (low < high) {
//             int sum = nums[low].first + nums[high].first;

//             if (sum == target) {
//                 return {nums[low].second, nums[high].second};
//             }
//             else if (sum < target) {
//                 low++;
//             }
//             else {
//                 high--;
//             }
//         }
//         return {};
//     }
// };


// ----------------------------------------------METHOD-3 : HASH-MAP APPROACH -----------------------------
// #include <unordered_map>
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> m;

//         for (int i = 0; i < nums.size(); i++) {
//             int required = target - nums[i];
//             if (m.find(required) != m.end()) {
//                 return {m[required], i};
//             }
//             m[nums[i]] = i;
//         }
//         return {};
//     }
// };