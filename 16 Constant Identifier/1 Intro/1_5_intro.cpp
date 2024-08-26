#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int x=10;
    const int * const ptr=&x;    //now pointer even can't modify x and can't point to any other variable
    int y=20;
    //ptr=&y;       ptr is not free to point any variable  
    //++(*ptr);  
    cout<<x;
}