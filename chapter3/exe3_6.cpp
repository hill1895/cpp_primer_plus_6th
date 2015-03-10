#include <iostream>
using namespace std;

int main()
{
  double distance;
  double petrol_use;

  cout<<"Enter the distance in km: ";
  cin>>distance;
  cout<<"Enter the petrol usage in liters: ";
  cin>>petrol_use;

  cout<<"The petrol usage every 100km is "<<petrol_use/distance*100<<" liters "<<endl;
}

