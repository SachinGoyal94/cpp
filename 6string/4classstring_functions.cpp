#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s1="Hello";
    cout<<s1<<endl;

    cout<<s1.length()<<endl;  //both lenght size give same output  
    cout<<s1.size()<<endl;    //they both give no of characters used ,space is also a character

    cout<<s1.capacity()<<endl;     //capacity>=lenght 
    
    //capcaity means like input is hello then compiler always create string 
    //have more charcter storage than required
    
    s1.resize(30);                 //to change capacity
    cout<<s1.capacity()<<endl;

    cout<<s1.max_size()<<endl;    //max size string that can be stored in compiler

    s1.clear();
    cout<<s1<<endl;                //erase whole string
   
    if(s1.empty())
    {
        cout<<"after clearing string we will get lenght ="<<s1.length()<<endl;

    }
    else{
        cout<<"lenght!=0";
    }
}