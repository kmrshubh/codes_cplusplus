// print terms of first x terms of series 3N+2 which are not multiple of 4

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    int val=0;
    for(int i=1;i<=x;i++){
        val=3*i+2;
        if(val%4!=0){
            cout<<val<<" ";
        }
    }

}