#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s="Hello world";
    char s1[100];
    char s2[100];
    char s3[100];
    char s4[100];
    s.copy(s1,s.length());   // s.lenght specifies that we want whole string to be copied
    cout<<s1<<endl;
    
    
    s.copy(s2,3);  
    s2[3]='\0'; //as partial string is copied so it will give garbage values so \0 inserted in new string
    cout<<s2<<endl;


    cout<<s.find("ll")<<endl; // it will find index of ll
    cout<<s.find('o')<<endl;  
    cout<<s.rfind('o')<<endl; //it will find index of o from the right of the string   
    cout<<s.find('k')<<endl; // if not forund give -ve or number which is not of lenght of string


    cout<<s.find_first_of('w')<<endl;  // it gives index of string/char from first of input string
    cout<<s.find_first_of('l',7)<<endl;// it gives index of string/char from the 7th index posn of string
    
    cout<<s.find_first_of("ow")<<endl;// it give index of any one character from starting of input string

    cout<<s.find_last_of('l')<<endl; // it gives index of string/char from the last of input string




}