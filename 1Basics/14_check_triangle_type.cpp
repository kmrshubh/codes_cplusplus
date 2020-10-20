//Check if triangle is equilateral, isoceles or scalene

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>=c){                                 // check if its a triangle
        if(a==b && b==c){
            cout<<"Equilateral triangle";
        }else if(a==b || b==c || c==a){
            cout<<"Isoceles triangle";
        }else{
            cout<<"Scalene triangle";
        }
    }else{
        cout<<"Not triangle";
    }
}