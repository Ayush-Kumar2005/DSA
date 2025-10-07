// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& arr) {
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             if(arr[i]%2==0) continue;
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]%2==0){
//                     swap(arr[i],arr[j]);
//                     break;
//                 }
//             }
//         }
//         return arr;
//     }
// };


// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& arr) {
//         int n=arr.size();
//         vector<int>ans;
//         for(int i=0;i<n;i++){
//             if(arr[i]%2==0){
//                 ans.push_back(arr[i]);
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]%2!=0){
//                 ans.push_back(arr[i]);
//             }
//         }
//         return ans;
//     }
// };