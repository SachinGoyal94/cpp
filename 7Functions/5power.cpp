#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
float power(float a,float b)
{
    float c;
    c=pow(a,b);
    return c;
}
int main()
{
    float x,y,z;
    x=2.9f;
    y=3.0f;
    z=power(x,y);
    cout<<z;
    return 0;
}
