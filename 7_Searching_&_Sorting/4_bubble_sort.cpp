#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];        //Swap
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }   

        
    }

}

int main(){
    int n;            
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    BubbleSort(arr,n);

    cout<<"Elements after bubble sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity - O(n^2), Space Complexity - O(1)