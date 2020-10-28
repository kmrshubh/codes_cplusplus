#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100],k;
    cin>>str>>k;

    int n=strlen(str);

    cout<<str<<"    ";

    for(int i=0;i<n;i++){
        if(str[i]==k){
            str[i]='x';
        }
    }

    cout<<str;

}