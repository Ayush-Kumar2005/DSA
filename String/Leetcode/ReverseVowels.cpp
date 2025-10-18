// class Solution {
// public:
//     int isVowel(char ch) {
//         string vowels = "aeiouAEIOU";
//         return vowels.find(ch) != string::npos;
//     }

//     string reverseVowels(string s) {
//         int left = 0;
//         int right = s.length() - 1;

//         while (left < right) {
//             if (!isVowel(s[left])) {
//                 left++;
//                 continue;
//             }
//             if (!isVowel(s[right])) {
//                 right--;
//                 continue;
//             }

//             char t = s[left];
//             s[left] = s[right];
//             s[right] = t;
//             left++;
//             right--;
//         }

//         return s;
//     }
// };


// class Solution {
// public:
//     bool isVowel(char c) {
//         string v = "aeiouAEIOU";
//         return v.find(c) != string::npos;
//     }

//     string reverseVowels(string s) {
//         stack<char> st;
//         for (char c : s) {
//             if (isVowel(c)) st.push(c);
//         }
//         for (int i = 0; i < s.size(); i++) {
//             if (isVowel(s[i])) {
//                 s[i] = st.top();
//                 st.pop();
//             }
//         }
//         return s;
//     }
// };
