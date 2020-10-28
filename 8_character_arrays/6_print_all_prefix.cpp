#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;

    int n=strlen(str);

    cout<<"All prefixes are"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    }

}