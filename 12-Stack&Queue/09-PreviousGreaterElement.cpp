#include <bits/stdc++.h>
using namespace std;

void previousGreaterElement(vector<int>& arr , int n) {
    stack<int> st;
    int pge[n];
    pge[0] = -1;
    st.push(arr[0]);

    for (int i = 1; i < n; i++) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            pge[i] = -1;
        } else {
            pge[i] = st.top();
        }

        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << pge[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    previousGreaterElement(a , n);
}
