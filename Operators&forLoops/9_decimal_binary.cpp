#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int pv=1,ans=0;
    while(n!=0){
        int rem=n%2;
        ans=ans+rem*pv;
        pv*=10;
        n/=2;
    }

    cout<<ans;
}