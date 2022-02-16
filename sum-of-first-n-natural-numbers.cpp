#include <iostream>
using namespace std;
int main()
{
  int n, sum;
  cout<<"Enter number of terms";
  cin>>n;
  sum = n*(n+1)/2;
  cout<<"The sum upto "<<n<<" terms is "<<sum;
  return 0;
}