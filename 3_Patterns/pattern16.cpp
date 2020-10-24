/* pattern 15

    ABCD
    BCDE
    CDEF
    DEFG 
                   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        char s='A'+i-1;
        for(int j=1;j<=n;j++){

            char c=s+j-1;
            cout<<c;
        }
        cout<<endl;
    }
}