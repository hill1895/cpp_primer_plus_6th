#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char *ch;
  int count=0;
  
  cout<<"Enter words (to stop, type the word done)";
  cin>>ch;

  while(strcmp(ch,"done")!=0)
  {
    //cout<<ch<<" ";
    count++;
    cin>>ch;
  }

  cout<<"You entered a total of "<<count<<" words."<<endl;
}


