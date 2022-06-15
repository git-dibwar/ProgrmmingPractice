#include<bits/stdc++.h>
using namespace std;

bool validPalindrome(string s) {
        int l=s.size();
        string st;
        for(int i=1;i<=l;i++){
            st[i]=s[l-i];
        }
        if(st==s){
            return true;
        }
        else {
            return false;
        }
        
}

int main(){

cout<<validPalindrome("mam");
cout<<validPalindrome("may");
return 0;
}