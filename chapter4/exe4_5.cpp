#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
  string name;  //using string in struct may have some problems when using getline method:w
  double weight;
  int calorie;
};

int main()
{
  CandyBar snack={"Mocha Munch",2.3,350};
  cout<<"Name: "<<snack.name<<endl;
  cout<<"Weight: "<<snack.weight<<endl;
  cout<<"Calorie: "<<snack.calorie<<endl;
}
 

