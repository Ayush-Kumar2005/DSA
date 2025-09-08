#include<bits/stdc++.h>
using namespace std;

void move0s(vector<int>& arr){
    int n = arr.size();
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void move0sToTheEnd(vector<int>& arr){
    int n = arr.size();
    //find first 0
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    
    if(j!= -1){
        for(int i=j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }

        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void moveZeros(vector<int>& arr){
        int n = arr.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                if (i != j) swap(arr[i], arr[j]);
                j++;
            }
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}


int main(){
    vector<int>arr = {1,2,4,0,5,0,7,2,0,3};
    moveZeros(arr);
}