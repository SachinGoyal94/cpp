/*int add(int x,int y,int p)   //function to add only 3 elements
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
}*/

//see the only difference here is datatype of input which cause overloading making code more complex
//template can be used to reduce this complexity

#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;
template<class T>
T add(T a,T b,T c)   //instead of float a or int a T a used
{
    T d;
    d=a+b+c;
    return d;
}
int main()
{
    int a=1,b=2,c=3,d;
    d=add(a,b,c);
    cout<<d<<endl;
    float e=1.2,f=3.3,g=2.48,h;
    h=add(e,f,g);
    cout<<h;
    return 0;
}