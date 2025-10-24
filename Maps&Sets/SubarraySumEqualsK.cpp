// -----------------------------------SUBARRAY SUM EQUALS K --------------------------------------------
// ---------------------------BRUTE FORCE APPROACH ---------------------------------------
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> prefixSum(n);
//         prefixSum[0] = nums[0];
        
//         // Compute prefix sums
//         for (int i = 1; i < n; i++) {
//             prefixSum[i] = prefixSum[i - 1] + nums[i];
//         }
        
//         int count = 0;
        
//         for (int i = 0; i < n; i++) {
//             // Case 1: element==k
//             if (prefixSum[i] == k) count++;
            
//             // Case 2: element>k : search (element-k) in the prefixSum array in the range (0,i-1)
//             for (int j = 0; j < i; j++) {
//                 if (prefixSum[i] - prefixSum[j] == k) {
//                     count++;
//                 }
//             }
//         }
        
//         return count;
//     }
// };


// ---------------------------------OPTIMIZED APPROACH : USING HASH-MAP ------------------------------
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> prefixSum(n);
//         prefixSum[0] = nums[0];
        
//         // Compute prefix sums
//         for (int i = 1; i < n; i++) {
//             prefixSum[i] = prefixSum[i - 1] + nums[i];
//         }
        
//         int count = 0;
        
//         unordered_map<int,int> mp;
//         for (int i = 0; i < n; i++) {
//             // Case 1: element==k
//             if (prefixSum[i] == k) count++;
            
//             // Case 2: element>k : search (element-k) in the prefixSum array in the range (0,i-1)
//             int rem = prefixSum[i]-k;
//             if(mp.find(rem)!=mp.end()) count+=mp[rem];
//             mp[prefixSum[i]]++;
//         }
        
//         return count;
//     }
// };
