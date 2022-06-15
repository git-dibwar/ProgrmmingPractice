#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amt, n;
    cout << "input the ammount: ";
    cin >> amt;
    cout << endl;
    

    switch (n)
    {
        case 1:cout << "Hundred's notes: " << amt/ 100<<endl;
            
        case 2:cout << "Fifty's notes: " << (amt / 100)/50<<endl;
        case 3:cout << "Twenty's notes: " << ((amt /100) /50) %20<<endl;
        case 4:cout << "One's notes: " << amt - (((amt / 100)/50) / 20);
        break;
            

       
    }
    return 0;
}