#include<bits/stdc++.h>
using namespace std;
// Dynamic Memory allocation
int main(){

int *p=new int;
*p=10;

cout<<*p<<endl;

double *pd=new double;
char *c=new char;
*pd=40;
*c='d';
cout<<*c<<" "<<*pd<<endl;
return 0;
}