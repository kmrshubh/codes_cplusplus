#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10][10];
    int m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }

}