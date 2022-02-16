#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float a, b, c, x1, x2;
  cout<<"Enter a, b, c : ";
  cin>>a>>b>>c;
  x1=(-b + sqrt(b*b-4*a*c))/(2*a);
  x2=(-b - sqrt(b*b-4*a*c))/(2*a);
  cout<<"the roots are "<<x1<<", "<<x2;
  return 0;
}