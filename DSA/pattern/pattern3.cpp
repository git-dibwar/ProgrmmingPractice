#include <bits/stdc++.h>
using namespace std;
// 1234
// 1234
// 1234
// 1234

int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;//-----------
        while (j <= n)        //
        {                    //row repeat
            cout << j;       //
            j++;             //
        }//---------------------
        cout << endl;
        i++;            //column repeat
    }
    return 0;
}