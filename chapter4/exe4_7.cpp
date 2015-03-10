#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
  string name;
  double diameter;
  double weight;
};

int main()
{
  Pizza pizza1;

  cout<<"Enter thr name of pizza: ";
  getline(cin,pizza1.name);
  cout<<"Enter the diameter of the pizza: ";
  cin>>pizza1.diameter;
  cout<<"Enter the weight of the pizza: ";
  cin>>pizza1.weight;

  cout<<"The name of pizza: "<<pizza1.name<<endl;
  cout<<"Diameter: "<<pizza1.diameter<<endl;
  cout<<"Weight: "<<pizza1.weight<<endl;
}

