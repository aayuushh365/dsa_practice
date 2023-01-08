// cin never process the space character
// so, for example if we input "hello world" then cin will only print hello

// we use cin.get() to get the whole sentence
// this accepts only one character at a time
// but it can read all types of characters including space

#include <iostream>
#include <cstring>

using namespace std;

// int main() {
//  char sentence[1000];

//  char temp = cin.get();  // this will take the first character of the sentence and store it in temp
// int len = 1;
//  while(temp != '\n') {
//   cout<<temp;
//   len++;
//   temp = cin.get();
//  }
//  cout << endl;
//  cout<<"length : "<<len<<endl;
// }

// we can also print sentence in different lines

int main()
{
 char sentence[1000];

 char temp = cin.get(); // this will take the first character of the sentence and store it in temp
 int len = 1;
 while (temp != '#')
 {
  cout << temp;
  len++;
  temp = cin.get();
 }
 cout << endl;
 cout << "length : " << len << endl;
}

// so, only on writing # the loop will break and the program will end 