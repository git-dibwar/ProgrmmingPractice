#include<iostream>
#include<stdlib.h>
//THIS CODE IS FOR UDERSTANDING PERPOSE ONLY
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
    for(int i=0;i<r;i++){
        delete[]p[i]; //first delete the individual arrays of each row
    }
    delete []p; //delete each row

}   