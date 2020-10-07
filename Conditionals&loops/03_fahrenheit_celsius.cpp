// fahrenheit to celsius  with a gap of w

#include<iostream>
using namespace std;

int main(){
    int s,e,w;
    cin>>s>>e>>w;

    while(s<=e){
        int f=s,c;
        c=((f-32)*5)/9;

        cout<<f<<" "<<c<<endl;
        s+=w;
    }
    
}