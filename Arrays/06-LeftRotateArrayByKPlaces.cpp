#include<bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------------------------------------
// Time Complexity: O(n * k)
// Space Complexity: O(1)
// Extra Space: 1 int (constant)
//-------------------------------------------------------------------------------------------------

void leftRotation(vector<int>& arr , int k){
    int n = arr.size();
    k = k % n ;

    for(int i = 1; i <= k; i++){
        int temp = arr[0];
        for(int j=0;j<n;j++){
            arr[j-1]=arr[j]; 
        }
        arr[n-1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//-------------------------------------------------------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(k)
// Extra Space: k integers (temporary vector)
//-------------------------------------------------------------------------------------------------

void leftRotate(vector<int>& arr , int k){
    int n = arr.size();
    k = k% n;
    vector<int>temp(k);

    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }

    int j=0;
    for(int i=n-k;i<n;i++){
        arr[i]=temp[j];
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//-------------------------------------------------------------------------------------------------
// Time Complexity: O(2N)
// Space Complexity: O(1)
// No extra space used.
//-------------------------------------------------------------------------------------------------

void rotateLeft(vector<int>& arr , int k){
    int n = arr.size();
    k = k% n;
    reverse(arr.begin() , arr.begin()+k);    // T.C=O(K)
    reverse(arr.begin()+k , arr.end());      // T.C = O(N-K)
    reverse(arr.begin() , arr.end());        // T.C = O(N)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    vector<int>arr = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
    rotateLeft(arr , 10);
}
