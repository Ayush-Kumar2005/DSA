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


//------------------------------------------------ GREEDY APPROACH ----------------------------------------------
// 1. Use a set to track unpaired characters.
// 2. Every time you see a character:
// 3. If it's already in the set → remove it (we’ve formed a pair).
//    Else → add it.
// 4. At the end, if the set is not empty, we can put one unpaired character in the center.


// class Solution {
// public:
//     int longestPalindrome(string s) {
//         unordered_set<char> set;
//         int length=0;
//         for(char c : s){
//             if(set.find(c)!=set.end()){     //character found inside the set => pair it
//                 length+=2;
//                 set.erase(c);
//             }
//             else{   // character not found for pairing
//                 set.insert(c);
//             }
//         }
//         if(set.size()>0) length++;
//         return length;
//     }
// };