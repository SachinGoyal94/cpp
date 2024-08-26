//what if there are trailing spaces before any word so for that this function needs to be followed

#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s="    words  checking  words checking";
    string::iterator it;
    int count=0,space=0,consonant=0,vowel=0,word=0;
    int n; 
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' ||
         s[i]=='i' || s[i]=='o' || s[i]=='u' )
        {

            vowel++;

        }
        
        else{
            if(s[i]!=' ')
            {
                  consonant++;
            }
        }
    }

   cout<<vowel<<endl;
    //cout<<space<<endl;
     cout<<consonant<<endl;
  

       for(int i=0;s[i]!='\0';i++)
       {
        if(s[i]==' ')
        {
            if(s[i+1]!=' ')
            {
                word++;

            }

        }   
       }


cout<<word<<endl;
 cout<<"no of words= "<<word<<endl;
}