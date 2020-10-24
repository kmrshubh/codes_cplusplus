#include<bits/stdc++.h>
using namespace std;

int find_unique(int arr[],int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
        }

        if(j==n){            
            return arr[i];
        }
    }

    return -1;
}

int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }

    int uni=find_unique(arr,7);

    cout<<uni;
}