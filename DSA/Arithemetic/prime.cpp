#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag;
    cout << "Input n: ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    { // selection of a number from the range 1 t0 n
        flag=0;
        for (int a = 2; a <= i / 2; a++)
        { // selction of a number from the range 1 to i/2
            if (i % a == 0)
            { // condition for the selected number to be prime
                // if
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout <<" "<<i;
        
    }
    return 0;
}