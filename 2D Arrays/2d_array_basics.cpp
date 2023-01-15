#include <iostream>

using namespace std;


// passed by reference
void print(int arr[][100] , int n , int m) {              // passing row can be optional but you must pass the columns
 for(int i=0; i<n;i++){
  for(int j=0; j<m; j++) {
   cout<<arr[i][j]<<" ";
  }
  cout << endl;
 }
}


int main() {
 int arr[100][100];
int n,m;    // n = number of rows, m = number of columns
cin>>n>>m;


// take input
for(int i=0; i<n;i++){
 for(int j=0;j<m;j++){
  cin>>arr[i][j];
}
}
cout<<"The matrix is: "<<endl;
print(arr,n,m);
return 0;
}

// row major order - 1D array is used to store 2D array in memory in row major order (row by row).
// column major order - 1D array is used to store 2D array in memory in column major order (column by column).
// row major order is used in C++ and Java
// column major order is used in Fortran