// write a function that takes in nxm 2d array and prints it in spiral order. start from top left corner and go right. when you reach the end of the row, go down one row. when you reach the end of the column, go left one column. when you reach the start of the row, go up one row. repeat the process.

// input : 
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// output : 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

#include <iostream>

using namespace std;


void print(int arr[][10], int n , int m){
 int startrow = 0;
 int startcol = 0;
 int endrow = n-1;
 int endcol = m-1;

 // outer loop (traverse outer boundary)
 while(startcol <= endcol && startrow <= endrow) {

  // traverse startrow 
  for(int col = startcol ; col<=endcol ; col++) {
   if(startrow == endrow) {
    break;
   }
   cout<<arr[startrow][col]<<endl;
  }

  // traverse endcol
  for(int row = startrow+1 ; row<=endrow ; row++) {
   cout<<arr[row][endcol]<<endl;
  }

  // traverse endrow
  for(int col = endcol-1 ; col>=startcol ; col--) {
   cout<<arr[endrow][col]<<endl;
  }

  // traverse startcol
  for(int row = endrow-1 ; row>=startrow+1 ; row--) {
   if(startcol==endcol){
    break;
   }
   cout<<arr[row][startcol]<<endl;
  }


  // update startrow, startcol, endrow, endcol
  startrow++;
  startcol++;
  endrow--;
  endcol--;
 }
}


int main() {
 int arr[][4] = {
  {1,2,3,4},              // we'll take a variable startrow - 1 , 2, 3, 4
  {5,6,7,8},              // we'll take a variable endrow - 13,14,15
  {9,10,11,12},          // we'll take a variable startcol - 9,5,1
  {13,14,15,16}          // we'll take a variable endcol - 8, 12, 16
 };
 int n=4,m=4;
 cout<<"The spiral print is : "<<endl;
 print(arr,n,m);

// we'll first print startrow iterating from startcol to endcol
// then we'll print endcol iterating from startrow+1 to endrow
// then we'll print endrow iterating from endcol-1 to startcol
// then we'll print startcol iterating from endrow-1 to startrow+1
// once the outer loop is finished 
// we'll increment startrow and decrement endcol , decrement endrow and increment startcol
}
// ...and so on 
