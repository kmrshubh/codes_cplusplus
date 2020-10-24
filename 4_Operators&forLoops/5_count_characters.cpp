#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    
    //cin Only count till space, white space or tab
    cin>>c;

    int count=0;
    while(c!='$'){
        count++;
        cin>>c;
    }

    cout<<count<<endl;

    //cin.get() consides space ,tab etc
    c=cin.get();

    count=0;
    while(c!='$'){
        count++;
        c=cin.get();
    }

    cout<<count;                
}

/*
    input                               output
    cin - a b c d e f $                 6    
    cin.get()-a b c d e f $             13

*/