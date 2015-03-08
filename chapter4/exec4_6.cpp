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
  CandyBar snack[3]={
    {"Mocha Munch",2.5,350},
    {"Apple Pie",4,200},
    {"Black Choclate",4.5,90}
  };

  cout<<"snack1: "<<endl;
  cout<<"name: "<<snack[0].name<<endl;
  cout<<"weight: "<<snack[0].weight<<endl;
  cout<<"calorie: "<<snack[0].calorie<<endl;

  
  cout<<"snack2: "<<endl;
  cout<<"name: "<<snack[1].name<<endl;
  cout<<"weight: "<<snack[1].weight<<endl;
  cout<<"calorie: "<<snack[1].calorie<<endl;

 
  cout<<"snack3: "<<endl;
  cout<<"name: "<<snack[2].name<<endl;
  cout<<"weight: "<<snack[2].weight<<endl;
  cout<<"calorie: "<<snack[2].calorie<<endl;
}

