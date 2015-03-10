#include <iostream>
#include <string>
using namespace std;

int main()
{
   const string Months[12]={
    "Jan","Feb","Mar","April","May","June","July","Aug","Sept","Oct","Nov","Dec"};
   int Sales[12];
   int sum=0;

   for(int i=0;i<12;i++)
   {
     cout<<"Enter the sales in "<<Months[i]<<": ";
     cin>>Sales[i];
     sum+=Sales[i];
   }
   cout<<"the total sales in this year is: "<<sum<<endl;
}


