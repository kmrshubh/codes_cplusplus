#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,res;
    cin>>a>>b;
    
    //AND operator  &
    res=a&b;
    cout<< res <<endl;

    //Or operator |
    res=a|b;
    cout<<res<<endl;

    //Not operator ~ !
    res=!a;
    cout<<"Not \n"<<res<<endl;
    res=~a;                         
    cout<<res<<endl;

    //XOR     ^
    res=a^b;
    cout<<res<<endl;

    //Bitwise left
    res=1<<4;
    cout<<"<<   "<< res<<endl;

    //Bitwise right
    res=4>>1;
    cout<<">>   "<<res<<endl;

    
}