//ITERATIVE APPROACH
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> triangle(numRows);

//         for (int i = 0; i < numRows; i++) {
//             triangle[i].resize(i + 1, 1); // first & last element = 1
//             for (int j = 1; j < i; j++) {
//                 triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//             }
//         }

//         return triangle;
//     }
// };



//RECURSIVE APPROACH ====> WILL NOT RUN ON LEETCODE
// class Solution {
// public:
//     int nCr(int n, int r) {
//         if (r == 0 || r == n) return 1;
//         return nCr(n - 1, r - 1) + nCr(n - 1, r);
//     }

//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> res;
//         for (int i = 0; i < numRows; i++) {
//             vector<int> row;
//             for (int j = 0; j <= i; j++) {
//                 row.push_back(nCr(i, j));
//             }
//             res.push_back(row);
//         }
//         return res;
//     }
// };


//MATHEMATICAL APPROACH
//T.C=O(N2)
// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> res;
//         for (int i = 0; i < numRows; i++) {
//             vector<int> row;
//             long long val=1;
//             for (int j = 0; j <= i; j++) {
//                 row.push_back(val);
//                 val=val*(i-j)/(j+1);
//             }
//             res.push_back(row);
//         }
//         return res;
//     }
// };
