#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
   string s="sachin";
   string::iterator it; //here it is like a pointer 

   //here it++means move ahead to next character of string and not add one 
   for(it=s.begin();it!=s.end();it++) //at end of input string \0 is there and no need in output
   {
      cout<<*it<<endl;
   }
   cout<<s<<endl;

   cout<<"now showing how to modify "<<endl;


   for(it=s.begin();it!=s.end();it++)
   {
      *it=*it-32;
      cout<<*it<<endl;
   }
   cout<<s<<endl;

   cout<<"showing how to iterate reverse"<<endl;

   string::reverse_iterator mt;
   

   for(mt=s.rbegin();mt!=s.rend();mt++)
   {
      cout<<*mt<<endl;
   }
   cout<<s<<endl;

   cout<<"iterating using for loop"<<endl;
   for(int i=0;s[i]!='\0';i++ )  //as we know every string stores \0 after ending of input string 
   {
      cout<<s[i]<<endl;
   }   
   

   cout<<"modifing using for loop"<<endl;
   for(int i=0;s[i]!='\0';i++ )  
   {
      s[i]=s[i]+1;
      cout<<s[i]<<endl;
   }  
   cout<<s<<endl;
   char s3[]="world";
   char s4[]=" ";

}

