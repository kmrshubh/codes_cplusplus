#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100][100];
    int m,n;
    cin>>m>>n;

    //taking inputs
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //printing row wise
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //printing column wise
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}