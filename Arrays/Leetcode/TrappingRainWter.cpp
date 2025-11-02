// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int> leftHeight(n) , rightHeight(n);

//         // finding maximum height in the left of "i" including itself
//         leftHeight[0]=height[0];
//         for(int i=1;i<n;i++){
//             leftHeight[i]=max(leftHeight[i-1],height[i]);
//         }

//         // finding maximum height in the right of "i" including itself
//         rightHeight[n-1]=height[n-1];
//         for(int i=n-2;i>=0;i--){
//             rightHeight[i]=max(rightHeight[i+1],height[i]);
//         }

//         // finding water
//         int water=0;
//         for(int i=0;i<n;i++){
//             water+=min(leftHeight[i],rightHeight[i])-height[i];
//         }

//         return water;

//     }
// };