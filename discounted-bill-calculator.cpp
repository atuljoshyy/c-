#include <iostream>
using namespace std;
int main()
{
  float amt, tot, disc;
  cout<<"Enter Bill Amount : ";
  cin>>amt;
  if(amt>=5000){
    disc=amt*20/100;
    tot = amt-disc;
    cout<<"You Have to pay rs"<<tot<<" after all deductions";
  }
  else if(amt<5000 && amt>=2000){
    disc=amt*10/100;
    tot = amt-disc;
    cout<<"You Have to pay rs"<<tot<<" after all deductions";
  }
  else if(amt<2000){
    disc=amt*5/100;
    tot = amt-disc;
    cout<<"You Have to pay rs"<<tot<<" after all deductions";
  }
  else {
    cout<<"INVALID AMOUNT!";
  }
  return 0;
}