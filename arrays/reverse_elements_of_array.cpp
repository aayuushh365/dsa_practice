#include <iostream>
using namespace std;

int reversearray (int arr[],int n) {
 int start = 0;
 int end = n-1;
 while ( start < end ) {             // this loop is executed n/2 times so O(N) is the time complexity
  swap (arr[start],arr[end]);
  start++;
  end--;
}

}

int main () {
 int arr[] = {48 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20};
 int n = sizeof(arr) / sizeof(int);
 cout<<"Array before reversing"<<endl;
 for(int i=0; i<n; i++) {
  cout << arr[i] << " ";
 }
 reversearray(arr,n);
 cout<<"Array after reversing"<<endl;
 for (int i = 0; i < n; i++) {
  cout << arr[i] << " ";
 }
}

// it is important to note that we're not taking any extra space. we're just reversing the array in place. so space complexity is O(1)