#include <iostream>
#include <string>
using namespace std;

struct Patron{
  string name;
  double donation;
};

int main()
{
  int num;
  int count=0;

  cout<<"Enter the number of patrons: ";
  cin>>num;

  Patron *patrons=new Patron[num];

  for(int i=0;i<num;i++)
  { 
    cin.get();
    cout<<"Enter the name of patron #"<<i+1<<": ";
    getline(cin,patrons[i].name);
    cout<<"Enter the donation of patron #"<<i+1<<": ";
    cin>>patrons[i].donation;
  }

  cout<<"Grand Patrons: "<<endl;
  for(int i=0;i<num;i++)
    if(patrons[i].donation>10000)
    {
      cout<<patrons[i].name<<": "<<patrons[i].donation<<endl;
      count++;
    }

  if(count==0)
    cout<<"none"<<endl;

  count=0;


  cout<<"Patrons: "<<endl;
  for(int i=0;i<num;i++)
    if(patrons[i].donation<=10000)
    {
        cout<<patrons[i].name<<endl;
        count++;
    }
  if(count==0)
    cout<<"none"<<endl;

  delete []patrons;
}
      

    
