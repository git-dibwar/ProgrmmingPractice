#include<bits/stdc++.h>
using namespace std;
//print all the sum of the elements in an array
int sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;

}

int main(){
int number[]={2,7,1,-4,11};
cout<<"The sum of the array elemets is: "<<sum(number,5);

return 0;
}