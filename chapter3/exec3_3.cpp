#include <iostream>
using namespace std;

int main()
{
  const int degree2min=60;
  const int min2sec=60;

  int degree,min,sec;
  cout<<"Enter a latitude in degrees, minutes and seconds: "<<endl;
  cout<<"First, enter the degrees: ";
  cin>>degree;
  cout<<"Next, enter the minutes of arc: ";
  cin>>min;
  cout<<"Finally, enter the seconds of arc:";
  cin>>sec;
  
  double latitude;

  latitude=degree+(double)min/degree2min+(double)sec/min2sec/degree2min;

  cout<<degree<<" degrees, "<<min<<" minutes, "<<sec<<" seconds = "<<latitude<<" degrees"<<endl;
}

