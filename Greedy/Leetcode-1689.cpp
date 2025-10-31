// ---------------------------LEETCODE-1689 : Partitioning Into Minimum Number Of Deci-Binary Numbers --------------------------------------------
//APPROACH-1
// class Solution {
// public:
//     int minPartitions(string n) {
//         int ans = n[0] - '0';
//         for(int i=1;i<n.size();i++){
//             if( (n[i] - '0') > ans ) ans=n[i] - '0';
//         }
//         return ans;
//     }
// };