#include<bits/stdc++.h>
using namespace std;

void increment(int n){
    n=n+1;
}

void increment1(int* n){
    *n=*n+1;
}

int main(){
    int n;
    cin>>n;

    increment(n);
    cout<<"Pass by value :  "<<n<<endl;

    increment1(&n);
    cout<<"Pass by reference:   "<<n<<endl;
}