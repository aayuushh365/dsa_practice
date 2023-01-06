// insertion sort is similar to playing cards in out hands 
// we take a new card let suppose 6
// we compare it with all the cards in our hand
// and create space for it. let suppose there are 3 cards 5,7,8
// we compare 6 with 5 and 7 and 8
// and we put 6 in the middle
// so we have 5,6,7,8
// so we created space for 6 between 5 and 7

// supppose we have an array of 5 elements
// 5,4,1,3,2
// we divide the array into 2 parts
// sorted part and unsorted part
// 5 is already sorted so we create a line between 5 and 4 
// we take 4 and compare it with 5
// if 4 < 5 then we took 4 to the left of 5
// so we have 4,5
// now we have 1,3,2
// we take 1 and compare it with 4 and 5
// 5 > 1 so 5 will move one step ahead to the right. 
// 4> 1 so 4 will move one step ahead to the right
// so we get 1,4,5 and 3,2
// we take 3 and compare it with 1,4,5
// 5 > 3 so 5 will move one step ahead to the right
// 4 > 3 so 4 will move one step ahead to the right
// 1 < 3 so 1 will move one step ahead to the left
// so we get 1,3,4,5 and 2
// we take 2 and compare it with 1,3,4,5
// 5 > 2 so 5 will move one step ahead to the right
// 4 > 2 so 4 will move one step ahead to the right
// 3 > 2 so 3 will move one step ahead to the right
// 1 < 2 so 1 will move one step ahead to the left
// so we get 1,2,3,4,5
// so we have sorted array


#include <iostream>

using namespace std;

void insertion_sort (int arr[], int n) {

 for(int i=1 ; i<=n-1 ; i++) {

  int curr = arr[i];
  int prev = i-1;
  while ( prev >= 0 && arr[prev] > curr)
  {
   arr[prev+1] = arr[prev];
   prev--;
  }
  arr[prev+1] = curr;
 }
}

int main()
{
 int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
 int n = sizeof(arr) / sizeof(int);
 insertion_sort(arr, n);
 cout << "Sorted array is : ";
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 return 0;
}
