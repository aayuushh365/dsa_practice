// idea : repeatedly find the min element from the unsorted part and put it at the beginning
// arr - [3,2,1,5,4]
// we break the array into 2 parts
// 3 and 2,1,5,4
// we check for the min element in 2,1,5,4
// we find 1 is the min element
// we swap 1 with 3
// 1 is in the right place

// now between 2,3,5,4
// we again broke the array into 2 parts
// 2 and 3,5,4
// 2 is in the right place
// now between 3,5,4
// we again broke the array into 2 parts
// 3 and 5,4
// 3 is in the right place
// now between 5,4
// we again broke the array into 2 parts
// 5 and 4
// we check for the min element in 4
// we find 4 is the min element
// we swap 4 with 5
// 4 is in the right place
// this will be the sorted array

#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
 for (int pos = 0; pos <= n - 2; pos++)
 {

  int curr = arr[pos];
  int min_pos = pos;

  for (int j = pos; j < n; j++)
  {
   if (arr[j] < arr[min_pos])
   {
    min_pos = j;
   }
  }
  swap(arr[min_pos], arr[pos]);
 }
}

int main()
{
 int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
 int n = sizeof(arr) / sizeof(int);
 selection_sort(arr, n);
 cout << "Sorted array is : ";
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 return 0;
}
