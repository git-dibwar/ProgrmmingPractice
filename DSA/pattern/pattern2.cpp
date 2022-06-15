#include <bits/stdc++.h>
using namespace std;
// 111
// 222
// 333
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int a = 1;
        while (a <= n)
        {
            cout << i;

            a++;
        }
        cout << endl;
        i++;
    }

    return 0;
}