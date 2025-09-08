#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int>& arr , int target){
    int n = arr.size();
    int idx = -1 ;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            idx=i;
            break;
        }
    }

    cout<< ((idx == -1) ? -1 : idx) ;

}



int main(){
    vector<int>arr = {1,2,4,0,5,0,7,2,0,3};
    linearSearch(arr , 3);
}