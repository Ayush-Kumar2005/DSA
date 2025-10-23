// ------------------ LEETCODE-1814 : COUNT NICE PAIRS IN ARRAY
#include<iostream>
#include<vector>
using namespace std;

int rev(int n){
    int r = 0;
    while(n>0){
        r*=10;
        r+=(n%10);
        n/=10;
    }
    return r;
}

// --------------------BRUTE FORCE : BUT TIME LIMIT EXCEED ERROR WILL COME ------------------------

int countNicePairs(vector<int>& nums){
    int n = nums.size();
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if( nums[i]+rev(nums[j])  == nums[j]+rev(nums[i]) ) count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {42,11,1,97};
    int res = countNicePairs(nums);
    cout<<res;
}
