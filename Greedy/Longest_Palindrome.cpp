// ----------------------------- LEETCODE-409 : LONGEST PALINDROME ----------------------------------------
// class Solution {
// public:
//     int longestPalindrome(string s) {
//         unordered_map<char,int> freq;
//         for (char ch : s) freq[ch]++;
//         int length=0;
//         int oddFreqFound=false;
//         for(auto x : freq){
//             if(x.second%2==0) length+=x.second;
//             else{
//                 oddFreqFound=true;
//                 length+=x.second-1;
//             }
//         }
//         if(oddFreqFound==true) length+=1;
//         return length;
//     }
// };