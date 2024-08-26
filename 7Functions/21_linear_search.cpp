#include <iostream>
using namespace std;
int finder(int A[],int n,int key)
{
   for(int i=0;i<n;i++)
   {
      if(key==A[i])
      {
         return i;
      }
   }
   return 0;
  
}
int main()
{
   int A[5]={1,2,3,4,5};
   int key;
   cin>>key;
   int index=finder(A,5,key);
   cout<<index;
}