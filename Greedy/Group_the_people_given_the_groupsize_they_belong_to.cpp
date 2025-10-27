// class Solution {
// public:
//     vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//         vector<vector<int>> result;
//         unordered_map<int , vector<int>> mp;
//         for (int i = 0; i < groupSizes.size(); i++)
//             mp[groupSizes[i]].push_back(i);

//         for (auto &p : mp) {
//             int size = p.first;
//             vector<int>& members = p.second;

//             for (int i = 0; i < members.size(); i += size)
//                 result.push_back(vector<int>(members.begin() + i, members.begin() + i + size));
//         }

//         return result;
//     }
// };