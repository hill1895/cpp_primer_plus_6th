#include <iostream>
#include <string>
using namespace std;

struct Car{
  string make;
  int year;
};

int main()
{
  int num;
  cout<<"how many cars do you wish to catalog?";
  cin>>num;

  Car *cars=new Car[num];

  for(int i=0;i<num;i++)
  {
    cin.get();
    cout<<"Car #"<<i+1<<endl;
    cout<<"Please enter the make: ";
    getline(cin,cars[i].make);
    cout<<"Please enter the year made: ";
    cin>>cars[i].year;
  }

  cout<<"Here is your collection: "<<endl;

  for(int i=0;i<num;i++)
    cout<<cars[i].year<<" "<<cars[i].make<<endl;

  delete []cars;
}

