#include <iostream>
using namespace std;

int printarray(int arr[]){

cout<<"in function"<<sizeof(arr)<<endl;

}

int main() {

 int arr[] = {1,2,3,4,5,6};
 int n = sizeof(arr)/sizeof(int);     // size of int is 6 bytes and sizeof arr is 6x4 bytes. hence n = 6x4/4 = 6 elements of array arr 
 cout<<"in main " << sizeof(arr) << endl;
printarray(arr);
return 0;
}


// // output is 
// in main 24      in main we have an array 
// in function 8   in function we have address of the array. these address are stored in form of pointers. ie 8 bytes.