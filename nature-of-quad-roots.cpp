#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  cout<<"Enter coeffients of the equation (a, b, c) : ";
  cin>>a>>b>>c;
  d= b*b-4*a*c;
  if(d==0){
    cout<<"The roots are real and equal";
  }
  else if(d>0){
    cout<<"The roots are real and unequal";
  }
  else{
    cout<<"The roots are imaginary";
  }
  return 0;
}