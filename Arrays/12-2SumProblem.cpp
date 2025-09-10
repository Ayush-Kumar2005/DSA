#include<bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int>arr , int target){
//         int n = arr.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[i] + arr[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
// }


    // vector<int> twoSum(vector<int>& arr, int target) {
    //     int n = arr.size();

    //     vector<pair<int,int>> nums;
    //     for (int i = 0; i < n; i++) {
    //         nums.push_back({arr[i], i});
    //     }

    //     sort(nums.begin(), nums.end());

    //     int low = 0, high = n - 1;

    //     while (low < high) {
    //         int sum = nums[low].first + nums[high].first;

    //         if (sum == target) {
    //             return {nums[low].second, nums[high].second};
    //         }
    //         else if (sum < target) {
    //             low++;
    //         }
    //         else {
    //             high--;
    //         }
    //     }
    //     return {};
    // }


string twoSum(vector<int>& arr , int target){
    int n =arr.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int moreNeeded = target-arr[i];
        if (mpp.find(moreNeeded) != mpp.end()){
            return "YES";
        }
        mpp[num]=i;
    }
    return "NO";
}




int main(){
    vector<int> arr = {2,6,5,8,11};
    // vector<int> res = twoSum(arr , 14);
    string res = twoSum(arr , 14);

    if (!res.empty()) {
        cout << res << endl;
    } else {
        cout << "No solution found!" << endl;
    }
}
