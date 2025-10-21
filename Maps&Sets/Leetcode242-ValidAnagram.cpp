//---------------------------------VALID ANAGRAM------------------------------------------
//Approach-1: using sorting
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()) return false;
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s==t) return true;
//         return false;
//     }
// };

//Approach-2: using 2 hash-maps
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()) return false;
//         unordered_map<char,int> map1;
//         unordered_map<char,int> map2;
//         for(int i=0;i<s.length();i++) map1[s[i]]++;
//         for(int i=0;i<t.length();i++) map2[t[i]]++;
//         for(auto x : map1){
//             char ch = x.first;
//             int freq1 = x.second;
//             if(map2.find(ch)!=map2.end()){
//                 int freq2 = map2[ch];
//                 if(freq1!=freq2) return false;
//             }
//             else return false;
//         }
//         return true;
//     }
// };