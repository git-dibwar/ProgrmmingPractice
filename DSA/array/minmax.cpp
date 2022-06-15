#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int size){
    int max=arr[0];
    for(int i=0; i<size;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int size){
    int min=arr[0];
    for(int i=0; i<size;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int main(){
int number[]={6,22,5,11,3,10,2};
cout<<"max number is: "<<getmax(number,7)<<endl;
cout<<"min number is: "<<getmin(number,7);
return 0;
}