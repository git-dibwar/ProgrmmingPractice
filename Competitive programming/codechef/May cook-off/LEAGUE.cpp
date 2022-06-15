#include<bits/stdc++.h>
using namespace std;

int main(){
//logic is that the maximum number of games a team could loss and still secure the 2nd postion is the half of the number of teams
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n;
    x=n/2;
    cout<<x*3<<endl;
}
return 0;
}