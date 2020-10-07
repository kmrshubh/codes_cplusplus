// Print pattern 
/*  1
    12
    123
    1234
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //while loop
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl<<"****************************************"<<endl;
    //for loop
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}