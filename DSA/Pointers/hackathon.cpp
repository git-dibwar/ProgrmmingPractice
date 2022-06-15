#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, g, ans = 0;
        cin >> n >> g;
        ll int l[g];

        for (int i = 0; i < g; i++)
        {
            cin >> l[i];
        }

        sort(l, l + g);

        int ans1 = 0;

        if (n > g)
        {
            int k = n % g;
            for (int i = 0; i < g; i++)
            {
                ans1 += l[i];
            }
            if ((n / g) == 0)
            {
                ans = (n / g) * ans1;
            }
            else
            {
                for (int i = 0; i < k; i++)
                {
                    ans += l[i];
                }
                ans = ans + (n / g) * ans1;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ans += l[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}