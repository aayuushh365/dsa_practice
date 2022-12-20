// so we have an array of numbers  1,2,3,4
// so pairs can be (1,2) (1,3) (1,4) (2,3) (2,4) (3,4)
// we'll pick 1 and then we'll iterate over all the other elements and print the pair 
// so that's the first pair (1,2) (1,3) (1,4) is printed
// then we'll pick 2 and then we'll iterate over all the other elements and print the pair
// so that's the second pair (2,3) (2,4) is printed
// and so on

// so i=1 and j=2,3,4 
// i=2 and j=3,4
// i=3 and j=4

#include <iostream>
using namespace std;


// using for each loop

int printpair (int arr[] ,int n) {
  for(int i = 0 ; i<n ; i++) {                  // this loop is executed n times so O(N) is the time complexity
   int x = arr[i];
   for(int j=i+1;j<n;j++) {                    // this loop is executed n-1 times so O(N) is the time complexity
    int y = arr[j];                            // so total time complexity is O(N^2).
    
    cout << x << "," << y << endl;
   }
   cout<<endl;
  }
}



int main () {

int arr[] = {1,2,3,4};
int n = sizeof(arr)/sizeof(int);
// for(int x : arr){    // here x is the variable which will take the value of each element of the array
//     cout<<x<<" ";
// }
printpair(arr,n);

return 0;
}