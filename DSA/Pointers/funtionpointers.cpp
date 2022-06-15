#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void incrementpointer(int p){
    p=p+1;
    cout<<p<<endl;
}
void sum(int *a, int size){
    cout<<sizeof(a)<<endl;
}
int main(){
int a=8;
int *s=&a;
print(s);

cout<<s<<endl;
cout<<&a<<endl;
incrementpointer(*s);
cout<<s<<endl;


cout<<"----------------"<<endl;
int m[10];
cout<<sizeof(m)<<endl;
sum(m,10);

return 0;
}