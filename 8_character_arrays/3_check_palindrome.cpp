#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;

    int n=strlen(str);

    int i=0,j=n-1;
    bool check=true;
    while(i<j){
        if(str[i]==str[j]){
            check=true;
            i++;
            j--;
        }else{
            check=false;
            break;
        }
    }

    if(check)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}