 #include<bits/stdc++.h>
 using namespace std;
 void inc(int &n){
    n++;
 }
 int main(){
 int i;
 i=10;
 
 int &j=i;
 //can't use int &j;
 // and j=i; incorrect
 i++;
 cout<<j<<endl;
 j++;
 cout<<j<<endl;

 int k=100;
inc(k);
cout<<k;
 


 return 0;
 }