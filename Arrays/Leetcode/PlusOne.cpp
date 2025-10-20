// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         for(int i = n - 1; i >= 0; --i) {
//             if(digits[i] < 9) {
//                 digits[i]++;
//                 return digits;
//             }
//             digits[i] = 0;
//         }
//         digits.insert(digits.begin(), 1);
//         return digits;
//     }
// };

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int carry = 1;
//         for(int i = digits.size() - 1; i >= 0; --i) {
//             int sum = digits[i] + carry;
//             digits[i] = sum % 10;
//             carry = sum / 10;
//             if(carry == 0) return digits;
//         }
//         if(carry) digits.insert(digits.begin(), carry);
//         return digits;
//     }
// };


// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         string s = "";
//         for(int d : digits) s += to_string(d);

//         int carry = 1;
//         for(int i = s.size() - 1; i >= 0; --i) {
//             int sum = (s[i] - '0') + carry;
//             s[i] = (sum % 10) + '0';
//             carry = sum / 10;
//             if(!carry) break;
//         }
//         if(carry) s.insert(s.begin(), '1');

//         vector<int> result;
//         for(char c : s) result.push_back(c - '0');
//         return result;
//     }
// };