//LEFT ROTATION OF ARRAY
//TIME COMPLEXITY = O(N)
//SPACE COMPLEXITY IN ALGORITHM = O(N)
//EXTRA SPACE USED IN ALGORITHM = O(1) 

#include<bits/stdc++.h>
using namespace std;

void leftRotation(vector<int>& arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6};
    leftRotation(arr);
}