#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name,dessert;

  cout<<"Enter your name:\n";
  getline(cin,name);  //enter a whole line.
  cout<<"Enter your favourite dessert:\n";
  getline(cin,dessert);
  cout<<"I have some delicious "<<dessert;
  cout<<" for you, "<<name<<".\n";
}

