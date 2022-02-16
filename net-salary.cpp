#include <iostream>
using namespace std;
int main()
{
  float basic_salary, allowances, deductions, net_salary;
  cout<<"Enter basic salary : ";
  cin >> basic_salary;
  cout<<"Enter percentage of allowances : ";
  cin>> allowances;
  cout<<"Enter percentage of deductions : ";
  cin>> deductions;
  net_salary = basic_salary+(basic_salary*allowances/100)-(basic_salary*deductions/100);
  cout<<"Your Total Salary : "<<net_salary;
  return 0;

}