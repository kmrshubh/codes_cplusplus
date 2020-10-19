#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"break \n";
    //break
    for(int i=0;i<7;i++){
        if(i==4){
            break;
        }
        cout<<i<<" ";
    }
     
    cout<<"\n skip \n";
    //skip
    for(int i=0;i<7;i++){
        if(i==4){
            continue;
        }
        cout<<i<<" ";
    }
}