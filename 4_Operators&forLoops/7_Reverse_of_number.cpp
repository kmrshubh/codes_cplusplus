#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rev=0;
    cin>>n;

    int pv=1;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;             //0 , 4 , 40+3
        n/=10;
    }

    cout<<rev;
}