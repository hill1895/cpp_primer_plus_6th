#include <iostream>
using namespace std;

int main()
{
  const double km2mile=0.6214;
  const double gal2l=3.875;
  double petrol_use;

  cout<<"Enter the petrol usage in l/100km: ";
  cin>>petrol_use;
  cout<<"The petrol usage in mpg is "<<1/(petrol_use/100/gal2l/km2mile)<<"mpg"<<endl;
}


