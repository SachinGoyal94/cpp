#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
class Rectangle           
{
    public:     //as we need to use lenght breadth area() in main function so public
    int lenght,breadth;  //2data members each of 4bytes and room1 will have 8bytes storage occupied
                         //data members are also called property 
    
    int area()      //functions will not occupy storage 
    {
        int AREA;
        AREA=lenght*breadth;
        return AREA;
    }
};                 //in class semicolon after closed parenthesis is must 
int main(){      
    Rectangle r1;         // earlier we have declared rectangle as a data type
    r1.lenght=10;         // r1 is the room1 which is object of class ractangle 
    r1.breadth=5;
    cout<<"area of room no 1 is "<<r1.area()<<endl;


    Rectangle r2;       //another obejct of class rectangle
    r2.lenght=20;         // r1 is the room1 which is object of class ractangle 
    r2.breadth=10;
    cout<<"area of room no 2 is "<<r2.area();
    return 0;
} 