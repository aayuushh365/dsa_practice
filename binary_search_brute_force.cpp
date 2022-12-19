// start = 0 , end = n-1 , mid = (start+end)/2
// while (start<=end){
// if (arr[mid]==key){
//   return mid;
// }
// else if (arr[mid]>key){
//   end = mid-1;
// }
// else{
//   start = mid+1;
// }
// mid = (start+end)/2;
// }
// return -1;
//
// // worst case - O(logN)
// // best case - O(1)
//
// // binary search is better than linear search
// // binary search is only applicable on sorted arrays
// // binary search is not applicable on linked lists
// // binary search is not applicable on unsorted arrays
// // binary search is not applicable on unsorted linked lists

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{

 // we can also add bounds for key so that it stays within the range of the array
 if(key < arr[0] || key > arr[n-1]){
  return -1;
 }
 int start = 0;
 int end = n - 1;
 while (start <= end)
 {
  int mid = (start + end) / 2;   // this line should be inside the while loop because the value of mid changes every time the loop runs and if it is outside the loop then the value of mid will be the same for every iteration of the loop. hence producing infinite loop.
  if (arr[mid] == key)
  {
   return mid;
  }
  else if (arr[mid] > key)
  {
   end = mid - 1;
  }
  else
  {
   start = mid + 1;
  }
 }
 return -1;
}

int main () {
 int arr[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
 int n = sizeof(arr) / sizeof(int); // This line of code is often used to determine the size of an array when the size of the array is not known at compile time. It can be useful in situations where the size of the array is determined dynamically at runtime, such as when reading in data from a file or user input.
 int key;
 cout << "Enter the key to be searched" << endl;
 cin >> key;
 int index = binary_search(arr, n, key);
 if (index != -1){
  cout << "element found at index " << index << endl;
 }
 else{
  cout << "element not found" << endl;
 }
 return 0;
}