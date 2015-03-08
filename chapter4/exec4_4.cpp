#include <iostream>
#include <string>
using namespace std;

int main()
{
  string f_name,l_name;
  string full_name;

  cout<<"Enter your first name: ";
  cin>>f_name;
  cout<<"Enter your last name: ";
  cin>>l_name;
  full_name=f_name+", "+l_name; //methods in string
  cout<<"Here is the information in a single string: "<<full_name<<endl;
}
