// run length encoding for string compression
// if compressed string is longer than original string, return original string
// input encoding : aabcccccaaa
// output encoding : a2b1c5a3
//
// input encoding : abcd
// output encoding : abcd (no compression) as then output will be a1b1c1d1 which is longer than original string

#include <iostream>
#include <cstring>

using namespace std;

string compress_string(string s) {
 int n = s.length();
 string result;
 for(int i=0; i<n;i++) {
  int count = 1;
  while(i<n-1 && s[i+1] == s[i]) {
   count++;
   i++;
  }
  result += s[i];
  result += to_string(count);
 }
 if(result.length() > s.length()) {
  return s;
 }
 return result;
}
int main() {
 string s1 = "aabcccccaaa";
 cout << compress_string(s1) << endl;
string s2 = "abcd";
 cout << compress_string(s2) << endl;
 return 0;
}