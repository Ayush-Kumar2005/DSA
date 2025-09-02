#include <bits/stdc++.h>
using namespace std;

void previousGreaterElementIndex(vector<int>& arr , int n) {
    stack<int> st;
    int pgi[n];
    int span[n];
    pgi[0] = -1;
    st.push(0);

    for (int i = 1; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            pgi[i] = -1;
        } else {
            pgi[i] = st.top();
        }

        st.push(i);
    }

    for (int i = 0; i < n; i++) {
        span[i]=(i-pgi[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << span[i] << " ";
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
    previousGreaterElementIndex(a , n);
}
