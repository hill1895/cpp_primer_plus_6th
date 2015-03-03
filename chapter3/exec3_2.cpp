#include <iostream>
using namespace std;

int main ()
{
  int height_ft,height_inch;
  int weight_lb;
  const int ft2inch=12;
  const double inch2m=0.0254;
  const double kg2lb=2.2;

  cout<<"your height is _ feet\b\b\b\b\b\b";
  cin>>height_ft;
  cout<<" __ inch\b\b\b\b\b\b\b";
  cin>>height_inch;
  cout<<"your weight is ___ lb\b\b\b\b\b\b";
  cin>>weight_lb;

  double height_m;
  double weight_kg;
  double BMI;

  height_m=(height_ft*ft2inch+height_inch)*inch2m;
  weight_kg=weight_lb/kg2lb;
  BMI=weight_kg/(height_m*height_m);

  cout<<"your BMI is "<<BMI<<endl;
}


