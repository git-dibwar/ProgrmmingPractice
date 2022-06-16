/* Assignment Problem
Problem Name: Deallocate memory
Problem Description:
How will you free the memory allocated by following program - */
// #include <iostream>
// using namespace std;

// int main() {
//     int *a = new int;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){

int *a = new int ;
delete a; //single element memory deallocation
//delete the pointer once used

int *arr=new int[100];
delete [] arr;//array memory deallocation
//delete the pointer once used

return 0;
}