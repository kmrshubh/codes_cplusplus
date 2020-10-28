#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            return i;
    }

    return -1;
}

int main(){
    int n,k;            //k=element to be found
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index=LinearSearch(arr,n,k);

    cout<<"Present at index "<<index<<endl;
}