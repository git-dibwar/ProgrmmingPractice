#include<bits/stdc++.h>
using namespace std;

int main(){


cout<<"++++++++"<<endl;
// char ch='a';
// char *p=&ch;
// cout<<ch<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;

char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[2]<<endl;


cout<<sizeof(s)<<endl; //'h','e','l','l','o','\n'
cout<<s[5]<<endl; //will print "\n"
return 0;
}