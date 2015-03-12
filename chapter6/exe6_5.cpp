#include <iostream>
using namespace std;

int main()
{
  double tvarps;
  double tax;

  cout<<"Please enter the income: ";
  

  while(cin>>tvarps && tvarps>=0)
  {
    if(tvarps<5001)
      tax=0;
    else if(tvarps>=5001 && tvarps<15001)
      tax=(tvarps-5000)*0.1;
    else if(tvarps>=15001 && tvarps<35000)
      tax=10000*0.1+(tvarps-15000)*0.15;
    else
      tax=1000*0.1+2000*0.15+(tvarps-35000)*0.2;
    cout<<"Your income is: "<<tvarps<<endl;
    cout<<"The tax you should pay is: "<<tax<<endl;
    cout<<"Please enter the income: ";
    
  }

}

