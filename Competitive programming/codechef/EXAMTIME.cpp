#include <bits/stdc++.h>
using namespace std;

int main()
{
    int DSA1, DSA2, TOC1, TOC2, DM1, DM2;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> DSA1 >> TOC1 >> DM1;
        cin >> DSA2 >> TOC2 >> DM2;
        int T1, T2;
        T1 = DSA1 + TOC1 + DM1;
        T2 = DSA2 + TOC2 + DM2;
        
        if(T1>T2){
            cout<<"DRAGON"<<endl;
        }
        else if (T1<T2){
            cout<<"SLOTH"<<endl;
        }

        else if(T1==T2 && (DSA1>DSA2)){
            cout<<"DRAGON"<<endl;
            }
        else if (T1==T2 && (DSA1<DSA2)){
                cout<<"SLOTH"<<endl;
                }
        else if(T1==T2 && (DSA1==DSA2) && (TOC1>TOC2)){
            cout<<"DRAGON"<<endl;
            }
        else if(T1==T2 && (DSA1==DSA2) && (TOC1<TOC2)){
                cout<<"SLOTH"<<endl;
                }
         else if(T1==T2 && (DSA1==DSA2) && (TOC1==TOC2) && (DM1>DM2)){
            cout<<"DRAGON"<<endl;
            }
            else if (T1==T2 && (DSA1==DSA2) && (TOC1==TOC2) && (DM1<DM2)){
                cout<<"SLOTH"<<endl;
                }
       
            else{
                cout<<"TIE"<<endl;
                }

    }

    return 0;
}