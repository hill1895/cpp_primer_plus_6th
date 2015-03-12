#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  char ch;
  cin.get(ch);
  while(ch!='@')
  {
    if(!isdigit(ch))
    {
      if(isupper(ch))
        cout<<char(tolower(ch));
      else if(islower(ch))
        cout<<char(toupper(ch));
      else 
        cout<<ch;
    }
    cin.get(ch);
  }
}

