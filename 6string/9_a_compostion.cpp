//checking no of vowels words spaces


#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s="sachin goyal";
    string::iterator it;
    int count=0,space=0,consonant=0,vowel=0;
    for(it=s.begin();it!=s.end();it++)
    {
        if(*it=='A' || *it=='E' || *it=='A' || *it=='I' || *it=='O' || *it=='U' || *it=='a' || *it=='e' ||
         *it=='i' || *it=='o' || *it=='u' )
        {
            vowel++;

        }
        else{
            if(*it==' ')
            {
                space++;

            }
            
        
        else{
            consonant++;
       
        }
    }
}
    cout<<vowel<<endl;
    cout<<space<<endl;
    cout<<consonant<<endl;
    cout<<"no of words= "<<space+1<<endl;
}