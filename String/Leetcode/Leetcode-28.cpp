// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int res = haystack.find(needle);
//         return res;
//     }
// };


// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.size();
//         int m = needle.size();
//         if (m == 0) return 0;

//         for (int i = 0; i <= n - m; i++) {
//             int j = 0;
//             while (j < m && haystack[i + j] == needle[j]) j++;
//             if (j == m) return i;
//         }
//         return -1;
//     }
// };


// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.size(), m = needle.size();
//         if (m == 0) return 0;
//         if (m > n) return -1;

//         const int p = 31;
//         const int mod = 1e9 + 7;

//         long long needleHash = 0, hayHash = 0, power = 1;
//         for (int i = 0; i < m; i++) {
//             needleHash = (needleHash * p + needle[i]) % mod;
//             hayHash = (hayHash * p + haystack[i]) % mod;
//             if (i < m - 1) power = (power * p) % mod;
//         }

//         for (int i = 0; i <= n - m; i++) {
//             if (hayHash == needleHash && haystack.substr(i, m) == needle)
//                 return i;
//             if (i < n - m) {
//                 hayHash = (hayHash - haystack[i] * power % mod + mod) % mod;
//                 hayHash = (hayHash * p + haystack[i + m]) % mod;
//             }
//         }
//         return -1;
//     }
// };