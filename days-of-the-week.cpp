#include <iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter a number (1-7) : ";
  cin>>num;
  if(num==1){
    cout<<"SUNDAY";
  }
  else if(num==2){
    cout<<"MONDAY";
  }
  else if(num==3){
    cout<<"TUESDAY";
  }
  else if(num==4){
    cout<<"WEDNESDAY";
  }
  else if(num==5){
    cout<<"THURSDAY";
  }
  else if(num==6){
    cout<<"FRIDAY";
  }
  else if(num==7){
    cout<<"SATURDAY";
  }
  else{
    cout<<"INVALID NUMBER!";
  }
  return 0;


}