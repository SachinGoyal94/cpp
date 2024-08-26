#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s="Hello";
    string s1="world"; 
    cout<<s.substr(2)<<endl;  //index 2
    cout<<s.substr(2,3)<<endl; //ind 2 letters lenght 3
    cout<<s.substr(2).substr(1)<<endl;
    cout<<s.compare(s1)<<endl;  //chk file 3char_fun.cpp


    cout<<s.at(3)<<endl;   
    cout<<s[3]<<endl;
    s[3]='L';//if we were creating new string then use" "but we are replacing a char with char so ''used
    cout<<s[3]<<endl;


    s=s+s1;    //concatenate 2 strings
    cout<<s<<endl;  
    s=s+" world,How are you";  
    cout<<s<<endl; 


    s=s1; //pasting s1 in s
    cout<<s<<"   "<<s1<<endl;


    cout<<s.front()<<endl; //first character of string s
    cout<<s.back()<<endl;  //last character of string s
}