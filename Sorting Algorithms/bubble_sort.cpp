// key idea : take the larger element to the end of repeatedly swapping adjacent elements if they are in wrong order.

// ex [5,4,3,2,1]



// we take 5 and compare it to 4                           This is iteration number 1
// if 5 > 4 then we swap them
// [4,5,3,2,1]
// next we take 5 and compare it to 3
// if 5 > 3 then we swap them
// [4,3,5,2,1]
// in the end we get on iterating 5 [4,3,2,1,5]
// we took element from j=0 to j=n-2
// and we compared a[j] to a[j+1]
// if a[j] > a[j+1] then we swap them

// now 5 is already sorted 

// now we take 4 and compare it to 3                       This is iteration number 2
// if 4 > 3 then we swap them
// [3,4,2,1,5]
// in the end we get [3,2,1,4,5]
// we took element from j=0 to j=n-3
// and we compared a[j] to a[j+1]
// if a[j] > a[j+1] then we swap them

// now 4 is already sorted

// now we take 3 and compare it to 2                       This is iteration number 3
// if 3 > 2 then we swap them
// [2,3,1,4,5]
// in the end we get [2,1,3,4,5]
// we took element from j=0 to j=n-4
// and we compared a[j] to a[j+1]
// if a[j] > a[j+1] then we swap them

// now 3 is already sorted 

// now we take 2 and compare it to 1                       This is iteration number 4
// if 2 > 1 then we swap them
// [1,2,3,4,5]
// in the end we get [1,2,3,4,5]
// we took element from j=0 to j=n-5
// and we compared a[j] to a[j+1]
// if a[j] > a[j+1] then we swap them

// now 2 is already sorted

// so final sorted array is [1,2,3,4,5]

// so if number of iterations is times 
// we run 2 loops 
// for(times)
     // for(j=0 to j=n-1-times)

#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n){
 for(int times=1 ; times<=n-1 ; times++ ){
  // repeated swapping
  for(int j=0 ; j<=n-1-times ; j++){
   if(arr[j] > arr[j+1]){
    swap(arr[j],arr[j+1]);
   } 
  }
 }
}

int main () {
 int arr[] = {-2,3,4,-1,5,-12,6,1,3};
 int n = sizeof(arr)/sizeof(int);
 bubble_sort(arr,n);
 cout<<"Sorted array is : ";
 for(int i=0 ; i<n ; i++){
  cout<<arr[i]<<" ";
 }
 return 0;
}
