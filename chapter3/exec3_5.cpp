#include <iostream>
using namespace std;
int main()
{
  long long population_all;
  long long population_china;

  cout<<"Enter the world's population: ";
  cin>>population_all;
  cout<<"Enter the population of China: ";
  cin>>population_china;

  cout<<"The population of China is "<<(double)population_china/population_all*100<<"% of the world population."<<endl;
}
