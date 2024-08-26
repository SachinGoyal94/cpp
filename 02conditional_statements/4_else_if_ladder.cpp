#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
enum dayname {sun=1,mon,tue,wed,thu,fri,sat};
int main() {
  dayname day;
  day=sat;
  if(day==1)
   {
       cout<<"sun";
   }
   else
   {
       if(day==2)
       {
           cout<<"mon";
       }
       else
       {
           if(day==3)
           {
               cout<<"tue"<<day;
           }
           else
           {
               if(day==4)
               {
                   cout<<"wed";
               }
               else
               {
                   if(day==5)
                   {
                       cout<<"thu";
                   }
                   else
                   {
                       if(day==6)
                       {
                           cout<<"fri";
                       }
                       else
                       {
                           cout<<"sat";
                       }
                     
                   }
               }
           }
       }
   }

   return 0;
}
