#include <iostream>
#include <cstring>

using namespace std;

int main() {
 char a[1000] = "apple";
 char b[1000];

// using strlen to find string length
 cout<<strlen(a)<<" "<<endl;

// using strcpy to copy string
strcpy(b,a);
cout<<b<<endl;

// using strcat to concatenate string
char web[] = "www.";
char domain[] = "cookie.com";
// cout<<strcat(web,domain)<<endl;
// if we copy this to string b

strcpy(b,web);
strcat(b,domain);
cout<<b<<endl;

// using strcmp to compare string
// if both strings are same then it will return 0
// if both strings are not same then it will return 1
cout<<strcmp(a,b)<<endl;
}