//print all prime no. lie between 2 to n

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        bool b=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                b=false;
                break;
            }
        }

        if(b){
            cout<<i<<" ";
        }
    }

}