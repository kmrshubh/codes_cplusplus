#include<bits/stdc++.h>
using namespace std;

int main(){
    int max=0;          // max=INT_MIN;

    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;

}