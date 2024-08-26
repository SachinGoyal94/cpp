/* write a program to demonstrate polymorphism using base class derived class for calculating
area and perimeter Rectangle Circle*/
#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class Shape
{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;    
};
class Rectangle:public Shape
{
    private:
    int lenght,breadth;
    public:
    Rectangle(int l=1,int b=1)
    {
        lenght=l;
        breadth=b;
    }
    float area()
    {
        return lenght*breadth;
    } 
    float perimeter()
    {
        return 2*(lenght+breadth);
    }
};
class Circle:public Shape
{
    private:
    float radius;
    public:
    Circle(float r=1)
    {
        radius=r;
    }
    float area()
    {
        return 3.14*radius*radius;
    } 
    float perimeter()
    {
        return 2*3.14*radius;
    }
};
int main()
{
    Shape *r;
    r=new Circle(10);
    cout<<r->area()<<endl;
    cout<<r->perimeter()<<endl;
    delete[] r;
    r=nullptr; 

    r=new Rectangle(10,10);
    cout<<r->area()<<endl;
    cout<<r->perimeter();
}