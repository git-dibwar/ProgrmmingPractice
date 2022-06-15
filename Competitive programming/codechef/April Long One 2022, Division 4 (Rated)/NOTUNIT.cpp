#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       int i=-1;
        cin>>a>>b;
       
        if(a%2==0)
          {
            if((a+2)<=b) 
              cout<<a<<" "<<a+2;
             else
                cout<<i;
           }
         else 
         { 
             if(a%3==0){
            if((a+3)<=b) 
              cout<<a<<" "<<a+3;
            else
              cout<<i;
          }
       else 
           {
               if((a+3)<=b) 
              cout<<a+1<<" "<<a+3;
           else
              cout<<i;}
            }
       cout<<endl;
    }
    return 0;
}