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
