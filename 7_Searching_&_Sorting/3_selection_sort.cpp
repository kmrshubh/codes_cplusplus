// find min then swap. Move to next element and repeat process

#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int min=INT_MAX,min_index=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];         //min
                min_index=j;
            }
        }   

        int temp=arr[i];        //Swap
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }

}

int main(){
    int n;          
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    SelectionSort(arr,n);

    cout<<"Elements after selection sort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity - O(n^2), Space Complexity - O(1)