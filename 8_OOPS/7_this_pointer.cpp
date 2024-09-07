#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public:
    Rectangle(int length,int breadth)     //now what if i want to write int lenght int breadth instead of l
    {                          //for that i will use this pointer   this->lenght=lenght   
        this->length=length;
        //this->length=lt; also correct              //as Rectangle r(10,5) take values in int l int b 
        this->breadth=breadth;             //so this->lenght=lenght   which is      this->lenght=10      
    }                          //and lenght in this->lenght correspond to lenght of private:
                               //also it can be used if i give this->length=lt basically this-> is used to distinguish private data 
                            //member from data member in constructor Rectangle
    int area()
    {
        int Area=length*breadth;
        return Area;
    }
};
int main()
{
    Rectangle r(10,5);
    cout<<r.area();
}