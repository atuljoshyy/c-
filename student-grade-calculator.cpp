#include <iostream>
using namespace std;
int main()
{
  float m1, m2, m3, avg;
  cout<<"Enter Mark of sub1 : ";
  cin>>m1;
  cout<<"Enter Mark of sub2 : ";
  cin>>m2;
  cout<<"Enter Mark of sub3 : ";
  cin>>m3;
  avg = (m1+m2+m3)/3;
  if(avg>=60){
    cout<<"You have Scored A Grade with an average score of "<<avg;
  }
  else if(avg>=35 && avg<60){
   cout<<"You have Scored B Grade with an average score of "<<avg;
  }
   else if(avg<35){
   cout<<"You have Scored C Grade with an average score of "<<avg;
  }
   else {
     cout<<"Invalid Input!!";
   }
   return 0;
}