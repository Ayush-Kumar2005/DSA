// class Solution {
// public:
//     int maxFreqSum(string s) {
//         int freq[26] = {0};
//         for(char c : s) freq[c - 'a']++;

//         int maxV = 0, maxC = 0;
//         for(int i = 0; i < 26; i++) {
//             char ch = 'a' + i;
//             if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//                 maxV = max(maxV, freq[i]);
//             else
//                 maxC = max(maxC, freq[i]);
//         }
//         return maxV + maxC;
//     }
// };



// class Solution {
// public:
//     int maxFreqSum(string s) {
//         unordered_map<char,int> mp;
//         for(char c : s) mp[c]++;

//         int maxV = 0, maxC = 0;
//         string vowels = "aeiou";
//         for(auto &p : mp) {
//             char ch = p.first;
//             int freq = p.second;
//             if(vowels.find(ch) != string::npos)
//                 maxV = max(maxV, freq);
//             else
//                 maxC = max(maxC, freq);
//         }
//         return maxV + maxC;
//     }
// };

