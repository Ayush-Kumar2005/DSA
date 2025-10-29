// class Solution {
// public:
//     int scoreOfString(string s) {
//         int ans = 0;
//         for (int i = 1; i < (int)s.size(); ++i) {
//             ans += abs(s[i] - s[i-1]);
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     int scoreOfString(string s) {
//         int n = s.size();
//         if (n < 2) return 0;  // though constraints guarantee n ≥ 2
//         int ans = 0;
//         for (int i = 1; i < n; ++i) {
//             int prev = s[i-1];
//             int curr = s[i];
//             ans += abs(curr - prev);
//         }
//         return ans;
//     }
// };
