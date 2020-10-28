#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;

    int n=strlen(str);

    cout<<str<<"    ";

    int i=0,j=n-1;
    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }

    cout<<str;

}