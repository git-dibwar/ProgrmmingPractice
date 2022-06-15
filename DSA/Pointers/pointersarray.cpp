#include<bits/stdc++.h>
using namespace std;

int main(){
int a[10];
a[0]=5;
cout<<a<<endl;
cout<<*a<<endl;
cout<<&a[0]<<endl;

a[1]=10;
cout<<*(a+1)<<endl;
cout<<1[a]<<endl;

cout<<sizeof(a)<<endl;
cout<<sizeof(*a)<<endl;

int s=6;
int *p=&s;
cout<<p<<endl;
cout<<sizeof(p)<<endl;


cout<<"==============="<<endl;
int m[6] = {1, 2, 3};
cout<<m<<endl;
cout<<(m+1)<<endl;
cout << (m + 2);
return 0;
}