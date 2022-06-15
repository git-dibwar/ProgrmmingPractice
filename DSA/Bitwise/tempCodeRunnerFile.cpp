#include <bits/stdc++.h>
using namespace std;
int fun(int b){
    int co=0,i,a;
    a=b;
    for(i=0;i<10;i++){
        co+=a%10;
        a=a/10;
        if(a==0){
            break;
        }
        
    }
    return co;
}
int main() {
    int t;
    cin>>t;
	while(t--){
	    long long int n,i,a,co=0;
	    cin>>n;
	    int p=n+1;
	    int sum1=fun(n);
	    for(i=0;i<n;i++){
	        int sum2=fun(p);
	        if(sum2%2==0 && sum2%2!=0){
	            cout<<p<<endl;
	            break;
	        }
	        else if(sum1%2!=0 && sum2%2==0){
	            cout<<p<<endl;
	            break;
	        }
	        p+=1;
	    }
	}
	return 0;
}