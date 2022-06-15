#include <bits/stdc++.h>
using namespace std;
int sum(int a)
{
    int sum1 = 0;
    for (int i = 0; i < 10; i++)
    {
        sum1 += a % 10;
        a = a / 10;
        if (a == 0)
        {
            break;
        }
    }
    return sum1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        
        if(sum(n)%2==0){
            // cout<<"even";
            int a=0;
            for(int i=1;i<10;i++){
                a=n+i;
                if(sum(a)%2!=0){
                    cout<<a;
                }
                else{
                    break;
                }
            }
        }
        if(sum(n)%2!=0){
            // cout<<"odd";
             int b=0;
            for(int i=1;i<10;i++){
                b=n+i;
                if(sum(b)%2==0){
                    cout<<b;
                }
                else{
                    break;
                }
        }
    }
    }

    return 0;
}