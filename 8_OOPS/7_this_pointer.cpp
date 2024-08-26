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
    Rectangle(int lenght,int breadth)     //now what if i want to write int lenght int breadth instead of l
    {                          //for that i will use this pointer   this->lenght=lenght   
        this->lenght=lenght;              //as Rectangle r(10,5) take values in int l int b 
        this->breadth=breadth;             //so this->lenght=lenght   which is      this->lenght=10      
    }                          //and lenght in this->lenght correspond to lenght of private:
    
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