#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans*=i;
        i++;
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
}