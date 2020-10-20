//check if a number of member of fibonacci series or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int prev=0,next=1,sum=0;
    
    if(n==0 || n==1){
        cout<<"Yes";
        return 0;
    }
    
    bool b=false;
    while(sum<=n){
        sum=prev+next;
        prev=next;
        next=sum;

        if(sum==n){
            b=true;
            break;
        }
    }

    if(b){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}