#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int marks[100];
    int n;
    cout<<"enter no of students";
    cin>>n; 
    for(int i=0;i<n;i++){
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Marks of student "<<i+1<<": ";
        cout<<marks[i]<< endl;
    }
	return 0;
}

