#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=0;
    while(i<n){

        int j=n;
        while(j>i){
            cout<<' ';
            j=j-1;
        }
         int k = 0;
        while (k <=i)
        {

            cout << '*';
            k++;
        }
           int l = 0;
        while (l <=i)
        {

            cout << '*';
            l++;
        }
        cout<<endl;
        i++;
        
    }
  
    return 0;
}