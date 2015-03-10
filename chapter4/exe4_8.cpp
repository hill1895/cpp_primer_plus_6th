#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
  char name[20];
  double diameter;
  double weight;
};

int main()
{
  Pizza *pizza1=new Pizza;

  cout<<"Enter the diameter of the pizza: ";
  cin>>pizza1->diameter;
  cout<<"Enter the name of pizza: ";
  cin.get(pizza1->name,20).get();  //some problems when using getline() or get() method
  cout<<"Enter the weight of the pizza: ";
  cin>>pizza1->weight;

  cout<<"The name of pizza: "<<pizza1->name<<endl;
  cout<<"Diameter: "<<pizza1->diameter<<endl;
  cout<<"Weight: "<<pizza1->weight<<endl;
  
  delete pizza1;
}

