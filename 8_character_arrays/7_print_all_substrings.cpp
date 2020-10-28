#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;

    int n=strlen(str);

    cout<<"All substrings:"<<endl;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<str[k];
            }
            cout<<endl;
        }
    }

}