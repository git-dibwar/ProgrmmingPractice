#include <bits/stdc++.h> 
using namespace std; 
 
#define ll long long 
const int M = 1e9 + 7; 

int main() 
{ 
    int t; 
    cin >> t; 
    set<char> str; 
    str.insert('c'); 
    str.insert('g'); 
    str.insert('l'); 
    str.insert('r'); 
    while (t--) 
    { 
        int n; 
        string s; 
        cin >> n >> s; 
        ll ans = 1; 
        for (char ch : s) 
            if (str.find(ch) != str.end()) 
                ans = (ans * 2) % M; 
        cout << ans <<endl; 
    } 
    return 0; 
}