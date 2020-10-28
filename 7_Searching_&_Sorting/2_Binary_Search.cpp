#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int s,int e,int k){

    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==k)
            return mid;

        if(k<arr[mid])
            e=mid-1;
        else
            s=mid+1;
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

    //for binary search, array elements need to be sorted
    //either use sort() fuction or input elements in sorted manner

    int index=BinarySearch(arr,0,n-1,k);

    cout<<"Present at index "<<index<<endl;
}