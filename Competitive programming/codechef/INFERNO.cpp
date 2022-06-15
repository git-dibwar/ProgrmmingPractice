#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int h[n];

        for (int i = 0; i < n; i++){
            cin >> h[i];
        }

        int s;
        sort(h, h + n, greater<int>());
        s = h[0]; // single target damage time taken

        int m, sum = 0;
        for (int j = 0; j < n; j++){
            if (h[j] > x){
                if (h[j] % x > 0){
                    m = h[j] / x + 1;
                    }
                    else{
                    m = h[j] / x;
                    }
                    }
                else if (h[j] <= x){
                m = 1;
                }
                else{
                    m = 0;
                    }
                sum += m;//multiple target damage time taken 
                }


        if (s < sum)
        {
            cout << s << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}