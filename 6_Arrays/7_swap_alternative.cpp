#include<bits/stdc++.h>
using namespace std;

void swap_alt(int arr[],int n){
    int i=0;
    while(i<n){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i+=2;
    }
}

int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    swap_alt(arr,8);

    cout<<"\n after swapping \n";

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}