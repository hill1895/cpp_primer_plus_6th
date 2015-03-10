#include <iostream>
#include <array>
using namespace std;

int main()
{
  const int ArSize=16;
  array<long double,ArSize> factorials;
  factorials[1]=factorials[0]=1ll;
  for(int i=2;i<ArSize;i++)
    factorials[i]=i*factorials[i-1];
  for(int i=0;i<ArSize;i++)
    cout<<i<<"!="<<factorials[i]<<endl;//example 5-4

  long double hundred=1;
  for (int i=1;i<=100;i++)
    hundred=i*hundred;
  cout<<"100!="<<hundred<<endl;//calculate 100!. must use long double, or it will exceed the bounds.
  
}


