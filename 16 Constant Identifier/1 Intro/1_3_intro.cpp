#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int x=10;
    int const *ptr=&x;    //now pointer can't modify x as *ptr=&x i.e. ptr is const to data in x 
    int y=20;
    ptr=&y;               //ptr is free to point any no of variable but can't modify 
    //++(*ptr);           will give error
    cout<<*ptr;
}