#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){

    for(int i=0;i<n;i++){
        int current_val=arr[i],j;

        for(j=i-1;j>=0;j--){
            if(current_val<arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        } 
        arr[j+1]=current_val;
    }

}

int main(){
    int n;           
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    InsertionSort(arr,n);

    cout<<"Elements after Insertion sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity - O(n^2), Space Complexity - O(1)