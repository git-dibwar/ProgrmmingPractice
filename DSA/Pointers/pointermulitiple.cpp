#include<bits/stdc++.h>
using namespace std;
void square(int *p){
 int s = 13;
 p = &s;
 *p = (*p) * (*p);
 cout<<*p<<endl;
}
int main(){



 int a = 10;
 square(&a);//169
 cout << a << endl;

return 0;
}