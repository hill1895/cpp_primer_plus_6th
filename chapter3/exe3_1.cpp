#include <iostream>
using namespace std;
int main()
{
  const int ft2inch=12;
  int height;
  cout<<"your height is __ inch\b\b\b\b\b\b\b";
  cin>>height;
  cout<<"your height is "<<(height/ft2inch)<<" ft "<<(height%ft2inch)<<" inch"<<endl;

}

