// Check no. +ve,-ve or 0

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>0){
        cout<<"+ve";
    }else if(n==0){
        cout<<"0";
    }else{
        cout<<"-ve";
    }
}