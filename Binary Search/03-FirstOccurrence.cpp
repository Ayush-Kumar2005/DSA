#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& arr , int target){
    int low = 0 , high = arr.size()-1 ;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                return mid;
            }
            else{
                high =mid-1;
            }
        }
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int lastOccurrence(vector<int>& arr , int target){
    int low = 0 , high = arr.size()-1 ;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            if(arr[mid+1]!=target){
                return mid;
            }
            else{
                low=mid+1;
            }
        }
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int numberOfOccurrences(vector<int>& arr , int target){
    int first = firstOccurrence(arr,target);
    int last = lastOccurrence(arr,target);
    int count = 0;
    if((first != -1) && (last != -1)){
        count=last-first+1;
    }
    return count;
}


int main(){
    vector<int> arr = {1,2,2,3,3,3,3,4,4,4,5,6,7,7,8};
    int target = 9;
    int res1 = firstOccurrence(arr , target);
    int res2 = lastOccurrence(arr,target);
    int count = numberOfOccurrences(arr,target);
    cout<<"First Occurrence: "<<res1<<endl;
    cout<<"Last Occurrence: "<<res2<<endl;
    cout<<"Number of Occurrences: "<<count<<endl;
}
