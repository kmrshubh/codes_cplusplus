#include<bits/stdc++.h>
using namespace std;

void MergeArray(int arr1[],int arr2[],int n,int m[]){
    int i=0,j=0,k=0,size=2*n;

    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
            m[k++]=arr1[i++];
        }else{
            m[k++]=arr2[j++];
        }
    }

    while(i<n){
        m[k++]=arr1[i++];
    }

    while(j<n){
        m[k++]=arr2[j++];
    }

}

int main(){
    int n;            
    cin>>n;

    int arr1[n],arr2[n],size=2*n;
    int m[size];
    
    cout<<"Insert 1st array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Insert 1st array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    MergeArray(arr1,arr2,n,m);

    cout<<"Elements after merging:"<<endl;
    for(int i=0;i<2*n;i++){
        cout<<m[i]<<" ";
    }
}
