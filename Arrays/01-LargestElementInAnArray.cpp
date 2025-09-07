#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE = T.C = O(nlogn)
void largestElement(vector<int>& arr){
    sort(arr.begin() , arr.end());
    cout<<arr[arr.size()-1];
}

//OPTIMAL = T.C = O(n)
void largest(vector<int>& arr){
    int largest = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}

int main(){
    vector<int>arr = {3 , 4 , 2 , 8 , 7 , 6};
    // largestElement(arr);
    largest(arr);
}