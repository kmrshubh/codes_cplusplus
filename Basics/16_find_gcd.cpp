//find gcd or hcf 

#include<iostream>
using namespace std;

int main(){
    int a,b,gcd=0;
    cin>>a>>b;

    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }

    cout<<gcd;
}