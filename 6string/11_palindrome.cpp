#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s="madaM",g;
  
    int len=s.length();
    g.resize(len);
    cout<<len<<endl;


    for(int i=0,j=len-1;i<len;i++,j--)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
            g[j]=s[i];
        }
        else{
            g[j]=s[i];
        }
    }
    cout<<s<<endl<<g<<endl;
    g[len]='\0';
    if(s.compare(g)==0 || s.compare(g)==32 || s.compare(g)==-32)
    {
        cout<<"pa";
    } 
    else{
        cout<<"ok";
    }

}