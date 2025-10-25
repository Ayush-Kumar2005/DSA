// --------------------------------------LEETCODE-1005: MAXIMIZE SUM AFTER K NEGATIONS ---------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;


//Approach-1
    // int largestSumAfterKNegations(vector<int>& nums, int k) {
    //     priority_queue<int , vector<int> , greater<int> > pq(nums.begin(),nums.end());
    //     int sum=0;
    //     for(int i=0;i<nums.size();i++) sum+=nums[i];
    //     while(k--){
    //         int element = pq.top();
    //         if(element==0) break;
    //         pq.pop();
    //         sum-=element;
    //         pq.push(-1*element);
    //         sum+=(-element);
    //     }

    //     return sum;
    // }

//Approach-2
int largestSumAfterKNegations(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());  // Step 1: sort ascending

    for (int i = 0; i < nums.size() && k > 0; i++) {
        if (nums[i] < 0) {
            nums[i] = -nums[i];
            k--;
        }
    }

    // Step 2: sort again to handle smallest absolute value easily
    sort(nums.begin(), nums.end());

    // Step 3: if k is odd, flip the smallest element
    if (k % 2 == 1)
        nums[0] = -nums[0];

    // Step 4: compute sum
    int sum = 0;
    for (int num : nums)
        sum += num;

    return sum;
}

int main() {
    vector<int> nums = {4, 2, 3};
    int k = 1;

    cout << "Maximum Sum: " << largestSumAfterKNegations(nums, k) << endl;
    return 0;
}
