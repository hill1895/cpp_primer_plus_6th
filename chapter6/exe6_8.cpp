#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int count=0;
  char ch;

  ifstream text;

  text.open("exe4_8.txt");

  if(text.is_open())
    while(text.get(ch) && !text.eof())
      count++;

  cout<<"There are "<<count<<" chars in the file."<<endl;

  text.close();
}
