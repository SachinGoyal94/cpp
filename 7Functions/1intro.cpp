/*look at actual function =>corresponding to which function and on how many variables code is based 
 we will create  no of variables in formal function and will perform same function 
 it's like indirect refernce  ((in pointer's topic ) */

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int add(int a,int b)      //formal function(not main function) 
{
    int c;      
    c=a+b;     
    return c;           
    
}
int main() {              //actual function(or main function)
    int x=10,y=15;
    cout<<add(x,y);
    
    return 0;
}
//int add(int a,int b) is header of function which is called signature or prototype of function
