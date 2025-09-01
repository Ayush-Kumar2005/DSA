#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.length() % 2 != 0) return false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) return false;

                if (s[i] == ')') {
                    if (st.top() != '(') return false;
                    st.pop();
                } else if (s[i] == '}') {
                    if (st.top() != '{') return false;
                    st.pop();
                } else if (s[i] == ']') {
                    if (st.top() != '[') return false;
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};


int main() {
    Solution sol;
    string s;

    cout << "Enter a string of brackets: ";
    cin >> s;

    if (sol.isValid(s))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}
