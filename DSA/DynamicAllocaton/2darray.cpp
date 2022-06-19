#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int **p=new int *[r];
    for(int i=0;i<r;i++){
        p[i]=new int [c];
        for(int j=0;i<c;j++){
            cin>>p[i]p[j];
        }
    }
    return 0;
}