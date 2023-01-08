// creating charecter arrays 

// char a[100]
// char a[100] =  {a,b,c}  this is wrong    output will be abc and then garbage values
// char a[100] = {a,b,c,'/0'} this is correct   /0 is null character
// char a[100] = "abc"

// input and output of charecter arrays

#include <iostream>
#include <cstring>

using namespace std;

int main() {
 char a[] = {'a','b','c','h','\0'};
 // char b[] = "abcdef";
 // cout<<a<<endl; 
 // cout<<b<<endl; 
 cout<<strlen(a)<<endl;         // strlen is a function which gives the length of the string 
 cout<<sizeof(a)<<endl;        // sizeof is a function which gives the size of the array +1 because of null character 



 char c[100];
 cin>>c;
 cout<<c<<endl;            // this will print the word till the space is encountered 
// if we want to print the whole sentence then we have to use getline function
}
