#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n Find the perfect numbers between 1 and 500:\n";
    cout << "------------------------------------------------\n";
    cout << "\n The perfect numbers between 1 to 500 are: \n";
    for (int i = 1; i <= 500; i++)
    {
        int sum = 0;
        for (int u = 1; u < i; u++)
        {
            if (u < i)
            {
                if (i % u == 0)
                    sum = sum + u;
            }
        }
        if (sum == i)
        {
            cout << i << "  "
                 << "\n";
        }
    }
}