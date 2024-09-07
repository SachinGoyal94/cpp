#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
class Rectangle
{
    private:
    int lenght,breadth;
    public:
    Rectangle(int l,int b)     //paramaterized constructor
    {
        setlenght(l);
        setbreadth(b);
    }
    Rectangle(const Rectangle &r)   //copy constructor
    {                               //const means i am making orginal obeject constant
                                    //here so this copy constructor will not change it 
                                    //Rectangle(Rectangle &r works in the same way)
        this->lenght=r.lenght;  // both this->length and length=r.length are same     
        breadth=r.breadth;
    }
    void setlenght(int l)  
    {

        if(l>=0)
        {
            lenght=l;
        }
        else{
            lenght=0;
        }
    }

    void setbreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else{
            breadth=0;
        }
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
    Rectangle r2(r);
    cout<<r2.area();
    Rectangle r3=r;//same as Rectangle r3(&r)
    cout<<endl<<r3.area();
}