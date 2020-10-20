/* pattern 18

    A
    BC
    CDE
    DEFG 
                   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        char s='A'+i-1;
        for(int j=1;j<=i;j++){
            char c=s+j-1;
            cout<<c;
        }
        cout<<endl;
    }
}