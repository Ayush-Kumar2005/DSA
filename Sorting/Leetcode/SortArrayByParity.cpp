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


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if (nums[left] % 2 > nums[right] % 2) {
                swap(nums[left], nums[right]);
            }
            if (nums[left] % 2 == 0) left++;
            if (nums[right] % 2 == 1) right--;
        }
        return nums;
    }

};

// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         sort(nums.begin(), nums.end(), [](int a, int b) {
//             return (a % 2) < (b % 2);
//         });
//         return nums;
//     }

// };