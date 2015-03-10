#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const int MAX=20;
  char f_name[MAX],l_name[MAX],full_name[2*MAX];
  cout<<"Enter your first name:";
  cin>>f_name;
  cout<<"Enter your last name:";
  cin>>l_name;
  strcpy(full_name,f_name);//using functions in cstring
  strcat(full_name,", ");  
  strcat(full_name,l_name);
  cout<<"Here is the information in a single string: "<<full_name<<endl;
}


