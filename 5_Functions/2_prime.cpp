#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    bool b=Prime(n);
    
    if(b)
        cout<<"prime"<<endl;
    else
        cout<<"Not prime"<<endl;
}