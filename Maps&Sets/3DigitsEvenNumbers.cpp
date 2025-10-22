// ---------------------------------METHOD-1 : BRUTE FORCE APPROACH -------------------------------------------------
// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//         vector<int> ans;

//         for (int i = 100; i <= 999; i += 2) { // check all 3-digit even numbers
//             int x = i;
//             int a = x % 10; x /= 10;           // ones
//             int b = x % 10; x /= 10;           // tens
//             int c = x;                         // hundreds

//             // count digits in the current number
//             vector<int> need(10, 0);
//             need[a]++; need[b]++; need[c]++;

//             // count digits available in input
//             vector<int> have(10, 0);
//             for (int d : digits) have[d]++;

//             // check if we can make this number
//             bool ok = true;
//             for (int d = 0; d < 10; d++) {
//                 if (need[d] > have[d]) {
//                     ok = false;
//                     break;
//                 }
//             }

//             if (ok) ans.push_back(i);
//         }

//         return ans;
//     }
// };


//-------------------------------------METHOD-2 : USING HASH-MAP -----------------------------------
// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//         int n = digits.size();
//         vector<int> ans;
//         unordered_map<int,int> mp;
//         for(int ele : digits){
//             mp[ele]++;
//         }
//         for (int i = 100; i <= 999; i += 2) {
//             int x = i;
//             int a = x % 10; x /= 10; 
//             int b = x % 10; x /= 10;
//             int c = x;              
//             if(mp.find(a)!=mp.end()){
//                 mp[a]--;
//                 if(mp[a]==0) mp.erase(a);
//                 if(mp.find(b)!=mp.end()){
//                     mp[b]--;
//                     if(mp[b]==0) mp.erase(b);
//                     if(mp.find(c)!=mp.end()) ans.push_back(i);
//                     mp[b]++;
//                 }
//                 mp[a]++;
//             }
//         }

//         return ans;
//     }
// };
