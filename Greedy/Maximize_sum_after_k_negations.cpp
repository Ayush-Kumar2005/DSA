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

int main() {
    vector<int> nums = {4, 2, 3};
    int k = 1;

    cout << "Maximum Sum: " << largestSumAfterKNegations(nums, k) << endl;
    return 0;
}
