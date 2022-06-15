// Test Case 1: digitSum(123)=1+2+3=6 is even and digitSum(124)=1+2+4=7 is odd, so the answer is 124

// Test Case 2: digitSum(19)=1+9=10 is even, digitSum(20)=2+0=2 is also even, whereas digitSum(21)=2+1=3 is odd. Hence, the answer is 21.

// Test Case 3: digitSum(509)=5+0+9=14 is even, digitSum(510)=5+1+0=6 is also even, whereas digitSum(511)=5+1+1=7 is odd. Hence, the answer is 511.

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
	    int n,i,a;
	    cin>>n;
	    int p=n+1;
	    int sum1=fun(n);
	    for(i=0;i<n;i++){
	        int sum2=fun(p);
	        if(sum1%2==0 && sum2%2!=0){
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