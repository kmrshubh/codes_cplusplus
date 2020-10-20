//Check if we can form triangle using 3 dimensions or not

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>=c){                                //Sum of 2 sides greater than 3rd
        cout<<"yes";
    }else{
        cout<<"No";
    }
}