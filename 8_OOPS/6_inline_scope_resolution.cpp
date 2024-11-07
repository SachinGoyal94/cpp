/*now class and functions ,we know class is a like part of main function but formal functions are not ,
so incuding area perimeter function inside the class is not a good practice as when compiler will compile 
them and if both function are inside the class then their machine code will take space inside the main function  
and they will become inline functions and inside inline functions we can't perform complex functions 
like loops etc.
but if only function is defined in class and using scope resolution it's body is outside the class 
then machine code of that function will take seperate space from main function and whenever 
it will be called by main it will be used and will take seperate space from machine code of main function 
and we will be able to perform complex operations 
if we have write body of function outside class but still we want to make it inline then syntax will be

inline int getlenght(int l)

 :: means scope resoultion  */

/* now i will be showing every property functions which makes a complete class  */



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

    Rectangle();

    Rectangle(int l,int b);
    
    Rectangle(Rectangle &r);

    int getlenght(int l);
    
    inline void setlenght(int l);

    int getbreadth(int b);

    void setbreadth(int b);
    
    int area();

    int perimeter();

    bool issquare();      //it check whether the rectangle is square or not

    ~Rectangle();  //it is Deconstructor or a Destructor it is an implicit function 
                   //opposite of Constructor. It destroys the memory of the object assigned.
                   // the destuctor of every object will be called at ending of main function automatically
};



int main()
{
    Rectangle r(10,5);

    cout<<r.area()<<endl;

    cout<<r.perimeter()<<endl;
    
    if(r.issquare())
    {
        cout<<"square"<<endl;
    }
    else{
        
    }

    
}



Rectangle::Rectangle()
{
    lenght=0;
    breadth=0;
}

Rectangle::Rectangle(int l,int b)
{
    setlenght(l);
    setbreadth(b);
}

Rectangle::Rectangle(Rectangle &r)
{
    lenght=r.lenght;
    breadth=r.breadth;
}

int Rectangle::getlenght(int l)
{
    return lenght;
}

void Rectangle::setlenght(int l)
{
    if(l>=0)
    {
        lenght=l;
    }
    else{

    }
}

int Rectangle::getbreadth(int b)
{
    return breadth;
}

void Rectangle::setbreadth(int b)
{
    if(b>=0)
    {
        breadth=b;
    }
    else{

    }
}

int Rectangle::area()
{
    int Area;
    Area=lenght*breadth;
    return Area;
}

int Rectangle::perimeter()
{
    int perimeter;
    perimeter=2*(lenght+breadth);
    return perimeter;
}

bool Rectangle::issquare()
{
    return lenght==breadth;   
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}
