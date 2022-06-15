#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"------------------------------------"<<endl;
    cout<<"input a: ";
    cin>>a;
    cout<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Select the operator from + - * /: ";
    cin>>op;
    cout<<endl;
cout<<"------------------------------------"<<endl;
    cout<<"input b: ";
    cin>>b;
    cout<<endl;
cout<<"------------------------------------"<<endl;
    switch(op){
        case '+': cout<<a+b<<endl;
        break;

        case '-': cout<<a-b<<endl;
        break;

        case '*': cout<<a*b<<endl;
        break;

        case '/': cout<<a/b<<endl;
    
    }
return 0;
}