#include <iostream>

using namespace std;

// int main() {

//  char sentence[2000]; 

//  cin.getline(sentence, 1000);          // this will store 1000 letters only as we wrote (sentence , 1000)
//  cout << "response :" << sentence << endl;
// }

// so we do not have to use cin.get() instead we use cin.getline()


int main() {

 char paragraph[1000]; 

 cin.getline(paragraph, 1000 , '#');    // this line tells we have to stop on #
 cout << paragraph << endl;
}