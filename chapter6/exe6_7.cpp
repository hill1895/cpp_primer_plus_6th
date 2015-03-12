#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
  const int MAX=50;
  char words[MAX];
  int count_v=0,count_c=0,count_o=0;

  

  while(cin>>words && strcmp(words,"q")!=0)
  {
    if(isalpha(words[0]))
    {
      if(words[0]=='a' || words[0]=='e' || words[0]=='i' || words[0]=='o' || words[0]=='u')
        count_v++;
      else
        count_c++;
    }
    else
      count_o++;
   
  }
 
  cout<<count_v<<" words begin with vowels"<<endl;
  cout<<count_c<<" words begin with consonants"<<endl;
  cout<<count_o<<" others"<<endl;
}

