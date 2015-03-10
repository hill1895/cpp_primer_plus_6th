#include <iostream>
using namespace std;

int main()
{
  const int MAX=20;
  char f_name[MAX],l_name[MAX];
  int age;
  char grade;
  
  cout<<"What is your first name?";
  cin.getline(f_name,MAX);      //enter a whole line
  cout<<"What is your last name?";
  cin.getline(l_name,MAX);
  cout<<"What letter grade do you deserve?";
  cin>>grade;
  cout<<"What is your age?";
  cin>>age;
  cout<<"Name: "<<l_name<<", "<<f_name<<endl;
  cout<<"Grade: "<<char(grade+1)<<endl;
  cout<<"Age: "<<age<<endl;
}
