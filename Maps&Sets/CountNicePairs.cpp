// ------------------ LEETCODE-1814 : COUNT NICE PAIRS IN ARRAY
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// --------------------BRUTE FORCE : BUT TIME LIMIT EXCEED ERROR WILL COME ------------------------
// int rev(int n){
//     int r = 0;
//     while(n>0){
//         r*=10;
//         r+=(n%10);
//         n/=10;
//     }
//     return r;
// }
// int countNicePairs(vector<int>& nums){
//     int n = nums.size();
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if( nums[i]+rev(nums[j])  == nums[j]+rev(nums[i]) ) count++;
//         }
//     }
//     return count;
// }


// --------------------BETTER : USING HASH-MAP ------------------------------------------------------
// HINT : nums[i]-rev(nums[i]) == nums[j]-rev(nums[j])


    // Reverse a number
    // long long rev(long long n) {
    //     long long r = 0;
    //     while(n > 0) {
    //         r = r * 10 + n % 10;
    //         n /= 10;
    //     }
    //     return r;
    // }

    // // Factorial function
    // long long fact(long long n) {
    //     long long f = 1;
    //     for(long long i = 2; i <= n; i++) {
    //         f *= i;
    //     }
    //     return f;
    // }

    // // Combination function nCr
    // long long combi(long long n, long long r) {
    //     return fact(n) / (fact(r) * fact(n - r));
    // }

    // int countNicePairs(vector<int>& nums) {
    //     int n = nums.size();
    //     long long count = 0;

    //     // Transform nums[i] -> nums[i] - rev(nums[i])
    //     for(int i = 0; i < n; i++) {
    //         nums[i] -= rev(nums[i]);
    //     }

    //     // Count frequency of each transformed number
    //     unordered_map<long long, long long> mp;
    //     for(int i = 0; i < n; i++) {
    //         mp[nums[i]]++;
    //     }

    //     // Calculate pairs using combinations
    //     for(auto x : mp) {
    //         long long f = x.second;
    //         if(f >= 2) {
    //             count += combi(f, 2);
    //         }
    //     }

    //     return count;
    // }


// ------------------- OPTIMIZED APPROACH ----------------------------------------
    int rev(int n){
        int r = 0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;

        // Transform nums[i] -> nums[i] - rev(nums[i])
        for(int i = 0; i < n; i++) {
            nums[i] -= rev(nums[i]);
        }

        // Count frequency of each transformed number
        unordered_map<long long, long long> mp;
        for(int i = 0; i < n; i++) {
            if(mp.find(nums[i]) != mp.end()){
                count=count%1000000007;
                count+=mp[nums[i]];
                mp[nums[i]]++;
            }
            else mp[nums[i]]++;
        }

        return count;
    }

int main(){
    vector<int> nums = {42,11,1,97};
    int res = countNicePairs(nums);
    cout<<res;
}
