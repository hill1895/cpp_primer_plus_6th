#include <iostream>
using namespace std;

int main()
{
  const double S_interest=0.1;
  const double C_interest=0.05;
  double Daphne_all=100;
  double Cleo_all=100;
  int year=0;
  
  while(Daphne_all>=Cleo_all)
  {
    Daphne_all+=100*S_interest;
    Cleo_all+=Cleo_all*C_interest;
    year++;
  }

  cout<<"after "<<year<<"years,"<<endl;
  cout<<"Daphne now has "<<Daphne_all<<", Cleo now has "<<Cleo_all<<endl;
}
