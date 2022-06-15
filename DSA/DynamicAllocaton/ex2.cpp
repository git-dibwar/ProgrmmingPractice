#include<bits/stdc++.h>
using namespace std;
int increament(int &n){
    n++;
    return n;
}
int main(){
int i=3;
increament(i);
cout<<i<<endl;
i++;
int &j=i;
cout<<j;
return 0;
}