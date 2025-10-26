// -----------------------------LEETCODE-881 : BOATS TO SAVE PEOPLE --------------------------------------

// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         sort(people.begin(),people.end());
//         int i=0,j=people.size()-1;
//         int boats=0;
//         while(i<=j){
//             if(people[i]+people[j]<=limit){    // Pair two people in one boat
//                 boats++;
//                 i++;
//                 j--;
//             }
//             else{   // sum exceed the limit therefore jth people will get individual vote
//                 boats++;
//                 j--;
//             }
//         }
//         return boats;
//     }
// };