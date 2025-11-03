// ----------------------------- LEETCODE-2089 : FIND TARGET INDICES AFTER SORTING ARRAY -------------------------------------------

// APPROACH-1 : USING HASH-MAP
// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());               // T.C=O(nlogN)
//         unordered_map<int, vector<int>> mp;
//         for (int i = 0; i < nums.size(); i++) {     // T.C = n*T.C for each insertion = O(N)
//             mp[nums[i]].push_back(i);               // each insertion => T.C=O(1) 
//         }
//         if(mp.find(target)!=mp.end()){             // T.C = O(1)
//             return mp[target];
//         }
//         else return {};
//     }
// };

//TOTAL T.C = O(nlogN)+O(n)+O(1) = O(nlogN)




//APPROACH-2 : SORT+LINEAR SEARCH
// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         vector<int> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target) ans.push_back(i);
//         }
//         return ans;
//     }
// };
// Total T.C = O(nlogN)+O(n)
// TOTAL S.C = O(ans.size())


//APPROACH-3 : SORTING+BINARY SEARCH
// class Solution {
// public:
//     int lowerBound(vector<int>& nums, int n , int target){
//         int lo=0,hi=n-1;
//         int lb=n;
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(nums[mid]>=target){
//                 lb=mid;
//                 hi=mid-1;
//             }
//             else lo=mid+1;
//         }
//         return lb;
//     }
//     int upperBound(vector<int>& nums, int n , int target){
//         int lo=0,hi=n-1;
//         int ub=n;
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             if(nums[mid]>target){
//                 ub=mid;
//                 hi=mid-1;
//             }
//             else lo=mid+1;
//         }
//         return ub;
//     }
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<int> ans;
//         sort(nums.begin(),nums.end());
//         int lb = lowerBound(nums,n,target);
//         int ub = upperBound(nums,n,target);
//         for(int i=lb;i<ub;i++){
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };