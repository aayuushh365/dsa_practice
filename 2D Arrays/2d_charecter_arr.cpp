#include <iostream>

using namespace std;

int main() {
 char number [][10] = {
  "one",
  "two",
  "three",
  "four",
  "five",
  "six",
  "seven",
 };
 for(int i=0 ; i<3 ; i++){
  cout<< number[i] << endl;
 }
 return 0;
}
