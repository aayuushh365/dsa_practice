// given a sentence , count the number of digits , alphabets and spaces in the sentence
// for example if we input "hello world 123" then the output should be 3 digits and 2 spaces


#include <iostream>
#include <cstring>

using namespace std;

int main() {
 int digits = 0;
 int spaces = 0;
 int alphabets = 0;
 int length = 0;
 char temp;

temp = cin.get(); // this will take the first character of the sentence and store it in temp
 int len = 1;
 while (temp != '\n')
 {
if(temp >= '0' && temp <= '9'){
digits++;
}
else if ((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z')){
alphabets++;
}
else if( temp == ' ' || temp == '\t'){
 spaces++;
}
temp = cin.get();
len++;
}
cout << "digits: " << digits << endl;
cout << "alphabets: " << alphabets << endl;
cout << "spaces: " << spaces << endl;
cout << "length: " << len << endl;
}