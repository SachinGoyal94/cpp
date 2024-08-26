#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int x=10;
    int * const ptr=&x;    //now pointer can modify x but can't point to any other variable as 
    int y=20;             //ptr=&x and is now constant that means data is not constant ptr is const to x
    //ptr=&y;       ptr is not free to point any variable  
    ++(*ptr);  
    cout<<x;
}