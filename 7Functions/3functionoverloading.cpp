/* here all three add() functions are different and they contribute in function overloading 
for functions to be same they must have same name and same no of input parameters
and same datatype of input parameters
here function name is same 
but 1,2 add function has different no of inputs and 3 is different from 1,2 as
it has different datatype  */



#include<iostream>
#include<iostream>
#include<climits>
#include<cmath>
#include<cstring>
using namespace std;


int add(int x,int y )  //function to add only 2 elements
{
    int z;
    z=x+y;
    return z;
}


int add(int x,int y,int p)   //function to add only 3 elements
{
    int z;
    z=x+y+p;
    return z;
}


float add(float x,float y,float p)   //function to add 3 elements of float type
{
    float z;
    z=x+y+p;
    return z;
}


int main() 
{
    int x=10,y=20,p=30,z;
    float a=2.3,b=3.1,c=3.3,d;
    z=add(x,y);
    cout<<z<<endl;


    z=add(x,y,p);
    cout<<z<<endl;


    d=add(a,b,c);
    cout<<d;
    return 0;
}
