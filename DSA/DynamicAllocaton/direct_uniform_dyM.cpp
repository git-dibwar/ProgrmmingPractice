#include<bits/stdc++.h>
using namespace std;


int main(){
int *ptr1{new int(9)}; //direct initialization
int *ptr2{new int{10}};//uniform initialization

cout<<*ptr1<<" "<<*ptr2<<endl;
return 0;
}