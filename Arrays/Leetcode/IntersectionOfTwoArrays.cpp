// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int> s;
        
//             for(int i=0;i<nums2.size();i++){
//                 int val=nums2[i];
//                 for(int j=0;j<nums1.size();j++){
//                     if(nums1[j]==val){
//                         s.insert(val);
//                     }
//                 }
//             }

//         vector<int> result(s.begin(), s.end());
//         return result;
//     }
// };


//TWO POINTER APPROACH
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//         set<int> s;
        
//         int i = 0, j = 0;
//         while(i < nums1.size() && j < nums2.size()){
//             if(nums1[i] == nums2[j]){
//                 s.insert(nums1[i]);
//                 i++; j++;
//             }
//             else if(nums1[i] < nums2[j]){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//         }
        
//         return vector<int>(s.begin(), s.end());
//     }
// };


// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> s(nums1.begin(), nums1.end());
//         set<int> result;
//         for(int num : nums2){
//             if(s.count(num)) result.insert(num);
//         }
//         return vector<int>(result.begin(), result.end());
//     }
// };


// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//         vector<int> result;
        
//         set_intersection(nums1.begin(), nums1.end(), 
//                          nums2.begin(), nums2.end(),
//                          back_inserter(result));
                         
//         // remove duplicates (since set_intersection may add duplicates)
//         result.erase(unique(result.begin(), result.end()), result.end());
//         return result;
//     }
// };

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         if(nums1.size() > nums2.size()) swap(nums1, nums2); 
//         // nums1 is smaller
        
//         sort(nums2.begin(), nums2.end());
//         set<int> result;
        
//         for(int num : nums1){
//             if(binary_search(nums2.begin(), nums2.end(), num)){
//                 result.insert(num);
//             }
//         }
        
//         return vector<int>(result.begin(), result.end());
//     }
// };

