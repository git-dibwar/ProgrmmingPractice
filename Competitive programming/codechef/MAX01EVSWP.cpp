//https://www.youtube.com/watch?v=4hiwZvaP5_k&t=2s

#include <bits/stdc++.h>
using namespace std;
int count(string &s){
    int ans=0;
    int index=0;
    while(index+1<s.size()){
        if(s[index]=='0' && s[index+1]=='1'){
            index+=2;
            ans+=1;
        }
        else{
            index+=1;
        }
    }
    return ans;
}
string merge(string &even, string &odd){
    string ans="";
    for(int i=0;i<even.size();i++){
        ans+=even[i];

        if(i<odd.size()){
            ans+=odd[i];
        }
    }
    return ans;
}

void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    string odd=" ", even=" ";

    for(int i=0; i<n;i++){
        if(i%2){
            even+=s[i];
        }
        else{
            odd+=s[i];
        }
    }

    sort(even.begin(), odd.end());
    sort(odd.rbegin(), odd.rend());

    string m1=merge(even,odd); 

    reverse(odd.begin(),odd.end());
    string m2=merge(even,odd);

    reverse(even.begin(),even.end());
    string m3=merge(even, odd);

    cout<<max({count(m1),count(m2), count(m3)})<<"\n";
}
int main()
{
    int t; 
    cin >> t;
    while(t--) solution();

    return 0;
}