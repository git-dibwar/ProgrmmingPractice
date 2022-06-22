#include<bits/stdc++.h>
using namespace std;
int solve(int N, int A[]) {
        int ans=0;    
        int c;
        for(int i=0;i<N;i++){
            c=count(A.begin(),A.end(),A[i]);
            
            if(c>ans){
                ans=c;
            }
        }
        
        return ans;
      
    }

int main(){
int A[10]={92, 99, 5, 98, 36, 99, 99, 38, 38, 35};
int N=10;
cout<<solve(N,A);



return 0;
}