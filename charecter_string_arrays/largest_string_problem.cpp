// problem - Read N strings and print the largest string. each string can have upto 1000 characters.
 
#include <iostream>
#include <cstring>

using namespace std;

int main() {
 int n;
 cin>>n;
 cin.get(); // to remove the extra newline character
 char sentence[1000];
 char largest[1000];
int largest_len = 0;
 while(n--){
  cin.getline(sentence,1000);
  // cout<<sentence<<endl;
  int len = strlen(sentence);
  if(len > largest_len) {
   largest_len = len; // update the largest length
   strcpy(largest,sentence); // copy the sentence to largest
  }
 }
 cout<<"largest string is "<<largest<<" and length is "<<largest_len<<endl;
 return 0;
}