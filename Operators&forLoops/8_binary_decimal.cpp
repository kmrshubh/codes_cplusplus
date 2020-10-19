#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;

    int pv=1,ans=0;
    while(n!=0){
        int rem=n%10;
        ans+=rem*pv;
        pv=pv*2;
        n/=10;
    }

    cout<<ans;
}