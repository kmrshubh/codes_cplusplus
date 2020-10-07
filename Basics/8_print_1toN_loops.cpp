// Print 1 to N 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //while loop
    int i=1;
    while(i<=n){
        cout<<i;
        i++;
    }

    cout<<endl;

    //for loop
    for(int i=1;i<=n;i++){
        cout<<i;
    }

    cout<<endl;

    //Do while loop
    int j=1;
    do{
        cout<<j;
        j++;
    }while(j<=n);

}