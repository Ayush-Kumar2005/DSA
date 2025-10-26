// ----------------------LEETCODE-1013 : Partition Array Into Three Parts With Equal Sum -----------------------------------
// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) {     //T.C=O(N) S.C=O(1)
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




// ---------------------------GREEDY APPROACH -----------------------------

// 1. Accumulate from left to right.
// 2. When you hit the first target, start counting for the second.
// 3. As soon as you hit the second target before the end, return true — since the rest must be the third part.


// class Solution {
// public:
//     bool canThreePartsEqualSum(vector<int>& arr) {
//         int total = accumulate(arr.begin(), arr.end(), 0);
//         if (total % 3 != 0) return false;
//         int target = total / 3;
        
//         int curr = 0, count = 0;
//         for (int i = 0; i < arr.size(); ++i) {
//             curr += arr[i];
//             if (curr == target) {
//                 count++;
//                 curr = 0;
//                 if (count == 2 && i < arr.size() - 1) 
//                     return true; // found 2 parts before last element
//             }
//         }
//         return false;
//     }
// };