#include <iostream>
using namespace std;
int main()
{
  string name;
  cout<<"Enter your name : ";
  getline(cin, name);
  // cin>> name;  this line will only work if the name is one word, if the name contains multiple words then we have to use the getline() function
  cout<<"welcome, "<<name;
  return 0;
}