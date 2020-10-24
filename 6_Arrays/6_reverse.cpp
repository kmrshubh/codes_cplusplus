#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int i=0,j=n-1;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}

int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    reverse(arr,7);  
    
    cout<<"\n after reverse \n";

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}            