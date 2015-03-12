#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
  const string choices[4]=
  {
    "c) carnivore",
    "p) pianist",
    "t) tree",
    "g) game"
  };
  char ch;
  cout<<"Please enter one of the following choices:"<<endl;
  cout<<choices[0]<<"\t"<<right<<choices[1]<<endl;
  cout<<choices[2]<<"\t"<<right<<choices[3]<<endl;

  cout<<"Please enter  c, p, t or g: ";
  cin>>ch;

  while(isalpha(ch))
  {
    switch(ch)
    {
      case 'c' : cout<<"Fox is a carnivore."<<endl;break;
      case 'p' : cout<<"Chopin is a pianist."<<endl;break;
      case 't' : cout<<"Maple is a tree"<<endl;break;
      case 'g' : cout<<"COD is a game"<<endl;break;
      default : cout<<"Please enter c, p, t or g: ";
                
    }
  
    cin>>ch;
  }
    
}
