#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100];
    cin>>name;
    cout<<"Name is: "<<name<<endl;

    name[4]='x';
    cout<<name<<endl;

    name[4]='\0';
    cout<<name<<endl;

    cout<<"Length of char array ";
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count<<endl;


    //  strlen() function could be used to find char array length
    cout<<"Char array length"<<strlen(name)<<endl;

}