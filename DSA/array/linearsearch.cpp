#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0; i<size; i++){
        if (arr[i]==key){
            return 1;
        }
    }
return 0;
}

int main(){
int key;
int number[]={3,1,5,3,12,11,10};

cout<<"input a number: ";
cin>>key;
bool found= search(number, 7, key);

if(found){
    cout<<"the number is present";
}
else{
    cout<<"the number is not present";
}

return 0;
}