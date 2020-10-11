/* pattern 6 - Star Pattern 
    n=4;

       *
      ***
     *****
    *******

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }

        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }

        j=1;
        while(j<=i-1){
            cout<<"*";
            j++;
        }

        cout<<endl;
        i++;
    }
    
}