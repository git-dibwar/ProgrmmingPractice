#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size){
    cout<<"printing the array "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int main(){
int number[]={1,2,4,1,5,6,3,2};
cout<<"Value at 7th index "<<number[7]<<endl;
printArray(number,8);
return 0;
}