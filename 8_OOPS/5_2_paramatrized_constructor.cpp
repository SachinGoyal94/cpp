#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
    int lenght,breadth;
    public:
    Rectangle(int l,int b)     //paramaterized constructor
    {
        setlenght(l);          //or lenght =l;          breadth=b;
        setbreadth(b);
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
    cout<<r.area(); 

    //dynamic 
    Rectangle *p=new Rectangle(10,10);
    cout<<endl<<p->area();
    delete p;
}