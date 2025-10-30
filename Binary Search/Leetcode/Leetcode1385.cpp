// -----------------------------------BRUTE FORCE ---------------------------

// int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//     int count = 0;
//     for (int x : arr1) {
//         bool valid = true;
//         for (int y : arr2) {
//             if (abs(x - y) <= d) {
//                 valid = false;
//                 break;
//             }
//         }
//         if (valid) count++;
//     }
//     return count;
// }


// --------------------------------APPROACH-2 : SORT+BINARY SEARCH ------------------------------
// class Solution {
// public:
//     int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//         sort(arr2.begin(), arr2.end());
//         int count = 0;
        
//         for (int x : arr1) {
//             auto it = lower_bound(arr2.begin(), arr2.end(), x);
//             bool valid = true;
            
//             if (it != arr2.end() && abs(*it - x) <= d) valid = false;
//             if (it != arr2.begin() && abs(*(it - 1) - x) <= d) valid = false;
            
//             if (valid) count++;
//         }
//         return count;
//     }


// };