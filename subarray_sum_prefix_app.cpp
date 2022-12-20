// // we will find the largest subarray sum using prefix sum approach


// // so we have an array of {1,2,4,,-2,3}
// // and we have another array called prefix sum array which will store the sum of all the elements of the array from 0 to i
// // i.e {1,(1+2),(1+2+4),(1+2+4-2),(1+2+4-2+3)}
// // hence 
// // prefix[i] = prefix[i-1] + arr[i]

// // if we need to calculate the sum of subarray between indices i and j
// // then we can use the prefix sum array
// // sum of subarray between i and j = prefix[j] - prefix[i-1]


// #include <iostream>
// using namespace std;

// int largestsubarraysum (int arr[],int n){
//  int largest_sum = 0;
//  int prefix[n] = {0}; 
//  for(int i = 1; i < n ; i++) {
//   prefix[0] = arr[0];
//   for(int i = 1; i < n ; i++){
//   prefix[i] = prefix[i-1] + arr[i];
//  }}
// }