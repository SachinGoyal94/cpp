#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
    int lenght,breadth;
    public:
    int getlenght();
    int getbreadth();
    void setlenght(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
    bool issquare();
    ~Rectangle();
};


class Cuboid:public Rectangle
{
    private:
    int height;
    public:
    void setheight(int h)
    {
        if(h>=0)
        {
            height=h;
        }
        else{
            
        }
    }
    int getheight()
    {
        return height;
    }
    int Volume()
    {
        return getlenght()*getbreadth()*height;
    }
};

int main()
{
    Cuboid c;
    c.setheight(10);
    c.setlenght(10);
    c.setbreadth(10);
    cout<<c.Volume()<<endl;
}



void Rectangle::setlenght(int l)
{
    lenght=l;
}
void Rectangle::setbreadth(int b)
{
    breadth=b;
}
int Rectangle::getlenght()
{
    return lenght;
}
int Rectangle::getbreadth()
{
    return breadth;
}
int Rectangle::area()
{
    return lenght*breadth;
}
int Rectangle::perimeter()
{
    return 2*(lenght+breadth);
}
bool Rectangle::issquare()
{
    if(lenght==breadth)
    {
        cout<<"square";
    }
    else{

    }
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle destroyed";
}