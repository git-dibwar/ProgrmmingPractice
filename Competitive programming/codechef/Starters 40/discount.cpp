#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll int n, x, y, ct, ans, k=0, l=0;
        cin >> n >> x >> y;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
             l+=a[i];
        }
        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
           
            if (y >= a[i])
                ct+=1;
        }

        for (int i = ct; i < n; i++)
        {
            ans += a[i]-y;
        }
        
        k = ans+ x;
        
        cout<<ans<<endl;
cout<<k<<" "<<l<<endl;
        if (l>k)
        {
            cout << "COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }
    return 0;
}