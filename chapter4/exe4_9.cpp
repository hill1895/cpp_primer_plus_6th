#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
  string name;
  double weight;
  int calorie;
};

int main()
{
  CandyBar *snack=new CandyBar[3];
  
  snack[0]={"Hachaz",4.2,90}; //Only available in c++11!!
  snack[1]={"Moser-Roth",2.2,354};
  snack[2].name="Dave";snack[2].weight=23.24;snack[2].calorie=1000;//OK in all versions of C++


  cout<<"snack1: "<<snack[0].name<<endl;
  cout<<"weight: "<<snack[0].weight<<" calories: "<<snack[0].calorie<<endl;
  cout<<"snack2: "<<snack[1].name<<endl;
  cout<<"weight: "<<snack[1].weight<<" calories: "<<snack[1].calorie<<endl;
  cout<<"snack3: "<<snack[2].name<<endl;
  cout<<"weight: "<<snack[2].weight<<" calories: "<<snack[2].calorie<<endl;

  delete []snack;
}

  
 

