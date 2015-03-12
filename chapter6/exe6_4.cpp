#include <iostream>
using namespace std;

const int strsize=50;

struct bop{
  char fullname[strsize];
  char title[strsize];
  char bopname[strsize];
  int preference;
};

int main()
{
  bop bops[4]={
    {"Will Hunt","Manager","Pussy Riot",0},
    {"Wimp Macho","Salesman","Skip tp my lou",1},
    {"Stephen Curry","Ponit Gurad","Amazing Steve",2},
    {"Zidane","Super Star","Zizou",0}
  };

  cout<<"Benevolent Order of Programmer Report"<<endl;
  cout<<"a. display by name    "<<"b. display by title"<<endl;
  cout<<"c. display by bopname "<<"d. display by preference"<<endl;
  cout<<"q. quit"<<endl;

  char choice;

  cout<<"Enter your choice: ";
  cin>>choice;

  while(choice!='q')
  {
    switch(choice){
      case 'a'  : for(int i=0;i<4;i++)
                    cout<<bops[i].fullname<<endl;
                  cout<<"Next choice: ";
                  break;
      case 'b'  : for(int i=0;i<4;i++)
                    cout<<bops[i].title<<endl;
                  cout<<"Next choice: ";
                  break;
      case 'c'  : for(int i=0;i<4;i++)
                    cout<<bops[i].bopname<<endl;
                  cout<<"Next choice: ";
                  break;
      case 'd'  : for(int i=0;i<4;i++)
                    switch(bops[i].preference){
                      case 0  : cout<<bops[i].fullname<<endl;break;
                      case 1  : cout<<bops[i].title<<endl;break;
                      case 2  : cout<<bops[i].bopname<<endl;break;
                    }
                  cout<<"Next choice: ";
                  break;
      default   : cout<<"Enter the right choice: ";
    }
    cin>>choice;
  }
  cout<<"Bye!"<<endl;
}

