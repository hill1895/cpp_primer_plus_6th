#include <iostream>
using namespace std;

int main()
{
  const int day2hr=24;
  const int hr2min=60;
  const int min2sec=60;
  long long seconds;

  cout<<"Enter the number of seconds: ";
  cin>>seconds;

  int day,hour,min,sec;

  day=seconds/min2sec/hr2min/day2hr;
  hour=(seconds/min2sec/hr2min)%day2hr;
  min=seconds%(day2hr*hr2min*min2sec)%(hr2min*min2sec)/min2sec;
  sec=seconds%(day2hr*hr2min*min2sec)%(hr2min*min2sec)%min2sec;

  cout<<seconds<<" seconds = "<<day<<" days, "<<hour<< " hours, "<<min<<" minutes, "<<sec<<" seconds."<<endl;
}
