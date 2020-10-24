// print all no. less than n which are part of fibonacci series

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int prev=0,next=1,i=0,sum=0;

    while(sum<n){
        if(i<=1){
            cout<<prev<<" ";
            i++;
            continue;
        }
        if(i==1){
            cout<<next<<" ";
            i++;
            continue;
        }
        
        sum=prev+next;
        prev=next;
        next=sum;
        if(sum<n)
            cout<<next<<" ";
        i++;
    }
    
}