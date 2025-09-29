#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int>& arr , int target){
    int low = 0 , high = arr.size()-1 ;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target) return arr[mid];
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return arr[high];
}

int upperBound(vector<int>& arr , int target){
    int low = 0 , high = arr.size()-1 ;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target) return arr[mid];
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return arr[low];
}

int main(){
    vector<int> arr = {1,3,5,8,9 ,13, 17,18,21};
    int target = 6;
    int lb = lowerBound(arr , target);
    int ub = upperBound(arr , target);
    cout<<"Lower Bound: "<<lb<<endl;
    cout<<"Upper Bound: "<<ub;
}