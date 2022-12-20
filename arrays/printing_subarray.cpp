// in this program we will print the array between give indices

#include <iostream>
using namespace std;

int printsubarray(int arr[] , int n){
 int largest_sum = 0;
 int sum = 0;
 for(int i=0; i<n ; i++){ 
  for(int j=i; j<n ; j++) {
   // printing sum of subarray between given indices , this is a brute force approach 
   for (int k = i; k <= j; k++)
   {
    sum += arr[k];
  }
  largest_sum = max(largest_sum, sum);
}
}
return largest_sum;
}

int main() {
 int arr[] = {1,2,3,4};
 int n = sizeof(arr)/sizeof(int);
 cout<<printsubarray(arr,n)<<endl;
 return 0;
}