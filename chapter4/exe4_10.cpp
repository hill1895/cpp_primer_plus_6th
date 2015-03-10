#include <iostream>
#include <array>
using namespace std;

int main()
{
  array<double,3> grade;  //Compling option "-std=c++11" should be added to g++ complier

  cout<<"Enter your first grade: ";
  cin>>grade[0];
  cout<<"Enter your second grade: ";
  cin>>grade[1];
  cout<<"Enter your third grade: ";
  cin>>grade[2];

  double average;
  average=(grade[0]+grade[1]+grade[2])/3;
  cout<<"the average grade is:"<<average<<endl;
}
  
