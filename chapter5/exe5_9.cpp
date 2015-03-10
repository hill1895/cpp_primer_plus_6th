#include <iostream>
#include <string>
using namespace std;

int main()
{
  string words;
  int count=0;
  
  cout<<"Enter words (to stop, type the word done)";
  cin>>words;//can not use getline()!

  while(words!="done")
  {
    //cout<<ch<<" ";
    count++;
    cin>>words;
  }

  cout<<"You entered a total of "<<count<<" words."<<endl;
}


