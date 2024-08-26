//only difference between structure and class is in structure everything is public 

#include<bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int lenght,breadth;
    Rectangle(int l,int b)    
    {                         
        lenght=l;             
        breadth=b;             
    }                         
    
    int area()
    {
        int Area=lenght*breadth;
        return Area;
    }
};
int main()
{
    Rectangle r(10,5);
    cout<<r.area();
}