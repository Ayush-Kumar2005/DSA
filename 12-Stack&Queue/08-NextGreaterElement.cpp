// #include <bits/stdc++.h>
// using namespace std;

// void nextGreaterElement(vector<int>& arr) {
//     vector<int> v(arr.size(), -1);

//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = i + 1; j < arr.size(); j++) {
//             if (arr[j] > arr[i]) {
//                 v[i] = arr[j];
//                 break;
//             }
//         }
//     }


//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     nextGreaterElement(a);
// }



#include <bits/stdc++.h>
using namespace std;

void nextGreaterElement(vector<int>& arr , int n) {
    stack<int>st;
    int nge[n];
    nge[n-1] = -1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && (st.top()<=arr[i])){
            st.pop();
        }

        if(st.size()==0){
            nge[i]=-1;
        }
        else{
            nge[i]=st.top();
        }
        st.push(arr[i]);
    }


    for (int i = 0; i < n; i++) {
        cout << nge[i] << " ";
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
    nextGreaterElement(a , n);
}
