/* now in intro we took values but what if lenght is taken -ve then area will be -ve
so we will use set____ function to set lenght and breadth and as we have to do data hidng
we will make int lenght breadth not public and will use get____ function to read the 
inputs both get__ set__ are property functions and get__ is called accesor and set is 
called mutator     get is readable and set is writable */
#include<iostream>
#include<climits>
#include<cmath>
#include<cstring>
using namespace std;
class Rectangle
{
    private:    //if not using public then u may write private or may not  as private is by default
    int lenght,breadth;
    public:
    void setlenght(int l)  //as privated data is not used in main so this function is designed
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

    int getlenght(){           //now to know lenght this function is used as private is used
        return lenght;
    }

    int getbreadth(){
        return breadth;
    }  

    int area()
    {
        int Area=lenght*breadth;
        return Area;
    }

};

int main(){
    Rectangle r1;
    r1.setlenght(10);
    r1.setbreadth(5);

    cout<<r1.area()<<endl;
    cout<<r1.getlenght()<<endl;
    cout<<r1.getbreadth()<<endl;
    
    return 0;
}