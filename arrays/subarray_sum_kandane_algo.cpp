// let subarray has [-2,3,4,-1,5,-12,6,1,3]
// we'll maintain a running sum.
// take a variable curr_sum = 0 and max_sum = 0
// if any element is negative ignore it and move to next element
// so after -2 curr_sum = 0 max_sum=0 then 3 curr_sum = 3 and max_sum= 0  then 4 curr_sum = 7 max_sum = 7 then -1 curr_sum = 6 max_sum = 7 then 5 curr_sum = 11 max_sum = 11 then -12 curr_sum = 0 (as if we do -12 entire sum would go -ve and we can't let that happen) max_sum = 11 then 6 curr_sum = 6 max_sum = 11 then 1 curr_sum = 7 max_sum = 11 then 3 curr_sum = 10 max_sum = 11

# include <iostream>

using namespace std;

int max_subarray_kadane_algo(int arr[] , int n) {
 int curr_sum = 0;
 int max_sum = 0;
 for(int i = 0; i<n ; i++) {          // this loop will run n times hence time complexity is O(n) and space complexity is O(1) 
  curr_sum += arr[i];
  if(curr_sum<0) {
   curr_sum = 0;
  }
  max_sum = max(curr_sum,max_sum);
 }
 return max_sum;
}


int main() {
 int arr[] = {-2,3,4,-1,5,-12,6,1,3};
 int n = sizeof(arr)/sizeof(int);
 cout << max_subarray_kadane_algo(arr,n);
 return 0;
}