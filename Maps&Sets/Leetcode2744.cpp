//--------------------FIND MAXIMUM NUMBER OF STRING PAIRS----------------------------------------------------
//APPROACH-1 : USING ARRAY
//TIME COMPLEXITY : O(N2)
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             string rev = words[i];
//             reverse(rev.begin(),rev.end());
//             for(int j=i+1;j<n;j++){
//                 if(words[j]==rev) count++;
//             }
//         }
//         return count;
//     }
// };

//2nd approach : using sets
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         int count=0;
//         unordered_set<string> s;
//         for(int i=0;i<n;i++){
//             s.insert(words[i]);
//         }
//         for(int i=0;i<n;i++){
//             string rev=words[i];
//             reverse(rev.begin(),rev.end());
//             if(rev==words[i]) continue;
//             if(s.find(rev)!=s.end()){
//                 count++;
//                 s.erase(words[i]);
//             }
//         }
//         return count;
//     }
// };

//3rd approach : optimized(single loop)
// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//         int n = words.size();
//         int count=0;
//         unordered_set<string> s;
//         for(int i=0;i<n;i++){
//             string rev=words[i];
//             reverse(rev.begin(),rev.end());
//             if(s.find(rev)!=s.end()) count++;
//             else s.insert(words[i]);
//         }
//         return count;
//     }
// };