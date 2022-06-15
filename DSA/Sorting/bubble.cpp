#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {12, 45, 23, 51, 19, 8};

    int c = 1;
    while (c < 6)
    {
        for (int i = 0; i < 6 - c; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
            else
            {
                continue;
            }
        }
        c += 1;
         for (int i = 0; i < 6; i++)
    {
        cout << " " << a[i];
    }
    cout<<endl;
    }
   
    return 0;
}