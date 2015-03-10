#include <iostream>
#include <string>
using namespace std;

int main()
{
   const string Months[12]={
    "Jan","Feb","Mar","April","May","June","July","Aug","Sept","Oct","Nov","Dec"};
   const string order[3]={"first","second","third"};
   int Sales[3][12];
   int sum[3]={0,0,0};

   for (int i=0;i<3;i++)
     for(int j=0;j<12;j++)
     {
       cout<<"Enter the sales in "<<Months[j]<<" of the "<<order[i]<<" year: ";
       cin>>Sales[i][j];
       sum[i]+=Sales[i][j];
     }
   for(int i=0;i<3;i++)
   {
     cout<<"the total sales in the "<<order[i]<<" year is "<<sum[i]<<endl;
   }

   cout<<"the total sales in three year is: "<<(sum[0]+sum[1]+sum[2])<<endl;
}


