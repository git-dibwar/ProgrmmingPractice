#include<bits/stdc++.h>
using namespace std;

int main(){
int i=4;
cout<<&i<<endl;
int *p=&i;
i++;

cout<<p<<endl;
cout<<i<<endl;
cout<<*p<<endl;
cout<<sizeof(p)<<endl;

cout<<endl;
cout<<endl;

int *j=0; //if no value for *val the always initialize it with 0

cout<<*j<<endl; //segmentation error....these means it is pointing to a value whose address is not accessible
return 0;
}