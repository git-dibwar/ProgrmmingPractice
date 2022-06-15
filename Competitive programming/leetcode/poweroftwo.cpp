#include<bits/stdc++.h>
using namespace std;
 bool powerof2(int n){
    int x,y;
    x=~n;
    y=x+1;

    //power of 2 is not 0
    if (n==0){
        return 0;
    }
    //constraints
    else if(n>=INT_MAX|n<=INT_MIN){
        return 0;
    }

    //for n=4--100
    //x=~n---001
    //y=x+1---011
    //~(x|y)=000
    else if(~(x|y)==0){
        return 1;
    }

    else 
    return 0;
 }

int main(){
   cout<<powerof2(0)<<endl;
   cout<<powerof2(64)<<endl;
   cout<<powerof2(89);

return 0;
}