#include<bits/stdc++.h>
using namespace std;

int main(){
int a[10];
cout<<sizeof(a)<<endl;//4*10=40
int *p=&a[0];//for integer primitive data type..a=10; *p=&a; can be written but not like this for an array pointer
cout<<p<<endl;
cout<<sizeof(p)<<endl;//8
return 0;
}