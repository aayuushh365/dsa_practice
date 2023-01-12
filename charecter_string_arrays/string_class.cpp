#include <iostream>
#include <cstring>

using namespace std;

int main() {
 string s;

// to print every charecter of a string


 getline(cin, s , '.'); // read a string till you encounter a '.' character
 for (char ch : s)
 {
  cout << ch << ","<<endl;
 }
 cout<<s<<endl;
}