/* pattern 8
    n=4             n=7
    4444            7777777 
    4444            7777777
    4444            7777777
    4444            7777777
                    7777777
                    7777777
                    7777777    */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n;
        }
        cout<<endl;
    }
}