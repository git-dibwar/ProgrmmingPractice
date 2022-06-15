#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"input a character: ";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"hiii"<<endl;
    case 'c':
        cout<<"bingo"<<endl;
    
    default:
        cout<<"this is default"<<endl;
        break;
    }
    return 0;
}