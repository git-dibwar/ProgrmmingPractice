#include<bits/stdc++.h>
using namespace std;
void increament(int **p){
    int a;
    int *p1=&a;
    p=&p1;
    (**p)++;
}
int main(){
    int a=10;
    int *p=&a;
    increament(&p);
    cout<<a;

return 0;
}