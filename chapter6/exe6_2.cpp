#include <iostream>
using namespace std;

int main()
{ 
  const int MAX=10;
  double donation[MAX];
  int i=0;
  double sum=0;
  double average;
  int count=0;

  while(i<MAX && cin>>donation[i])
  {
    sum+=donation[i];
    i++;
  }

  average=sum/i;
  cout<<"The average donation is: "<<average<<endl;
  
  for(int j=0;j<i;j++)
    if(donation[j]>average)
      count++;

  cout<<"There are "<<count<<" donations bigger than average."<<endl;
}



