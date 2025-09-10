#include<bits/stdc++.h>
using namespace std;

// void elementAppearsOnce(vector<int>& arr ){
//     int n = arr.size();

//     int XOR = 0;
//     for(int i=0;i<arr.size();i++){
//         XOR=XOR^arr[i];
//     }

//     cout<<XOR<<endl;

// }


void elementAppearsOnce(vector<int>& arr ){
    int n = arr.size();

    int res = -1;
    for(int i=0;i<arr.size();i++){
        int tar = arr[i];
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==tar) cnt++;
        }
        if(cnt==1){
            res=tar;
        }
    }

    cout<<res<<endl;

}



int main(){
    vector<int>arr = {1,1 , 3 , 4 , 2 , 3 , 4};
    elementAppearsOnce(arr);
}