// ----------------------LEETCODE-1013 : Partition Array Into Three Parts With Equal Sum -----------------------------------
// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) {
//         int totalSum=0;
//         for(int i=0;i<arr.size();i++) totalSum+=arr[i];
//         if(totalSum%3!=0) return false;
//         int partSum = totalSum/3;
//         int curr=0,cnt=0;
//         for(int i=0;i<arr.size();i++){
//             curr+=arr[i];
//             if(curr==partSum){
//                 cnt++;
//                 curr=0;
//             }
//         }
//         return cnt>=3;
//     }
// };