#include <iostream>
using namespace std;

int main()
{
  int num,sum=0;
  cin>>num;

  while(num!=0)
  {
    sum+=num;
    cin>>num;
  }

  cout<<"the sum is: "<<sum<<endl;
}
