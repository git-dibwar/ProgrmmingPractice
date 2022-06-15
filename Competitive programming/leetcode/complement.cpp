#include <bits/stdc++.h>
using namespace std;

int complement(int n)
{
    int m;
    m = n;
    int mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = ~n & mask;

    return ans;
}

int main()
{
    int n;
    cout << "input a number: ";
    cin >> n;
    cout << complement(n);
    return 0;
}