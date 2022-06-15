#include<bits/stdc++.h>
using namespace std;

int main(){
    int amt=2570;
cout<<amt/100<<endl;
cout<<(amt-((amt/100)*100))/50<<endl;
cout<<(amt-((amt/100)*100)-(((amt-((amt/100)*100))/50)*50))/20<<endl;
cout<<amt-(((amt-((amt/100)*100)-(((amt-((amt/100)*100))/50)*50))/20)*20);
return 0;
}