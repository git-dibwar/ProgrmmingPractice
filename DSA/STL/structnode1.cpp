#include<iostream>
using namespace std;

struct node{
    string str;
    int num;
    char x;
    double doub;

    node(str_,num_,x_,doub_){
        str=str_;
        num=num_;
        x=x_;
        double=doub_;
    }
};
int main(){
    node dibwar=new node('Dibwarjeet', 54, 'y',593.3);
    cout<<dibwar<<endl;
    return 0;
}