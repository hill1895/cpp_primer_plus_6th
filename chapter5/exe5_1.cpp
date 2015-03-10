#include <iostream>
using namespace std;

int main()
{
  int low,high;
  int sum=0;
  cout<<"Enter the smaller  one: ";
  cin>>low;
  cout<<"Enter the bigger one: ";
  cin>>high;

  for(int i=low;i<=high;i++)
  {
    sum+=i;
  }
  cout<<"The sum is: "<<sum<<endl;
}


