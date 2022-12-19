#include <iostream>
using namespace std;

int linear_search (int arr[],int n , int key) {
   for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}

int main() {
  int arr [] = {1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(int);
  int key;
  cout<<"Enter the key to be searched"<<endl;
  cin>>key;
  int index = linear_search(arr,n,key);
  if(index!=-1){
    cout<<"element found at index "<<index<<endl;
  }
  else{
    cout<<"element not found"<<endl;
  }
  return 0;
}


// worst case
// for (int i = 0; i < n; i++)   - going through entire array so O(N)
// best case                     - O(1)