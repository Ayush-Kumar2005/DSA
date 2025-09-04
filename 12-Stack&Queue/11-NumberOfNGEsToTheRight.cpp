// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int q;
//     cin>>q;
//     for(int i=1;i<=q;i++){
//         int idx;
//         cin>>idx;
//         int count=0;
//         for(int j = idx+1;j<n;j++){
//             if(arr[j]>arr[idx]){
//                 count++;
//             }
//         }
//         cout<<count<<" ";
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> count(n, 0);
    stack<int> st; // stores indices in decreasing order

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            int j = st.top();
            count[i] = 1 + count[j];
        }
        st.push(i);
    }

    int q;
    cin >> q;
    while (q--) {
        int idx;
        cin >> idx;
        cout << count[idx] << " ";
    }
    return 0;
}



