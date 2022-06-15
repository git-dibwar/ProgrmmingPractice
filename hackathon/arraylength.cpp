#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int n,t;
	cin >> n>>t;    //Reading input from STDIN
	// Writing output to STDOUT
	ll int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	int c=0;
    int sum=0;
    int ans;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int s;
            s+=a[j];
            sum=a[i]+s;

        }
        int temp=sum;
        ans=sum;
        if(temp)
	
 
		
	}
    ans=c;

 cout<<ans;
	
}