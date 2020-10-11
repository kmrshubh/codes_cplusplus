/* pattern 17

    E
    DE
    CDE
    BCDE
    ABCDE 
                   */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        char s='A'+n-i;
        for(int j=1;j<=i;j++){
            char c=s+j-1;
            cout<<c;
        }
        cout<<endl;
    }
}