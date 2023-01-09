// find displacement - given a long route containing N, S, E, W directions, find the shortest path to reach the location

// sample input - SNNNEWE

// sample output - NNE

// so , if person goes 
// N - +y
// S - -y
// E - +x
// W - -x


#include <iostream>
#include <cstring>

using namespace std;

int main() {
 char route[1000];
 cin.getline(route, 1000);
 int x = 0;
 int y = 0;
 for(int i=0 ; route[i] != '\0' ; i++) {
  if(route[i]=='N'){
   y++;
  }
  else if(route[i]=='S'){
   y--;
  }
  else if(route[i]=='E'){
   x++;
  }
  else if(route[i]=='W'){
   x--;
  }
  }
  cout << "x = " << x << " y = " << y << endl;

  // now we have to find the shortest path to reach the location
  // if x is positive, we have to go east
  // if x is negative, we have to go west
  // if y is positive, we have to go north
  // if y is negative, we have to go south
  while (y > 0)
  {
  cout << "N";
  y--;
  }
  while (y < 0)
  {
  cout << "S";
  y++;
  }
  while(x>0){
   cout << "E";
   x--;
  }
  while(x<0){
   cout << "W";
   x++;
  }
 
 }