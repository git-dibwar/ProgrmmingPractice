#include<bits/stdc++.h>
using namespace std;

// 4321
// 4321
// 4321

int main(){
    int n;
    int i = 1;
    cin >> n;
    while(i<=n){
        int j=0;
        while(j<n){
            cout<<n-j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}