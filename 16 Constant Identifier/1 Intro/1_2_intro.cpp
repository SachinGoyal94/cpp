#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int x=10;
    int const *ptr=&x;    //now pointer can't modify x
    //++(*ptr);  will give error
    cout<<*ptr;
}